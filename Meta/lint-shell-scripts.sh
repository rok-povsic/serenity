#!/bin/bash
set -e pipefail

script_path=$(cd -P -- "$(dirname -- "$0")" && pwd -P)
cd "$script_path/.."

if ! command -v shellcheck &>/dev/null ; then
    echo "shellcheck is not available. Either skip this script, or install shellcheck."
    exit 1
fi

ERRORS=()

while IFS= read -r f; do
    if file "$f" | grep --quiet shell; then
        {
            shellcheck "$f" && echo -e "[\033[0;32mOK\033[0m]: successfully linted $f"
        } || {
            ERRORS+=("$f")
        }
    fi
done < <(git ls-files -- \
    '*.sh' \
    ':!:Toolchain' \
    ':!:Ports' \
    ':!:Shell/Tests' \
)

if (( ${#ERRORS[@]} )); then
    echo "Files failing shellcheck: ${ERRORS[*]}"
    exit 1
fi
