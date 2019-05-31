#!/bin/bash
set -eu
echo "pod lint"
pod lib lint --allow-warnings

echo "commit github"
git add -A && git commit -m "Release ${1}."
git tag $1
git push --tags

echo "publish pod"
pod trunk push MPCore.podspec --allow-warnings