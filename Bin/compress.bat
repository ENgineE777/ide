
"E:\\Work\\build//Bin//codesign\\ldid.exe" -k"E:\\Work\\build//Bin//cert//ios" -SAN_air.cer:AppleIncRootCertificate.cer:AppleWWDRCA.cer:AN_key.key:123 -C -E -I "E:\\Work\\build//bin//pack//Payload//ion.app//ion"

pause

"E:\\Work\\build//Bin//7-Zip\\7z.exe" -r a -tzip -y "E:\\Work\\build//bin//pack//app.ipa" "E:\\Work\\build//bin/pack/payload"

pause