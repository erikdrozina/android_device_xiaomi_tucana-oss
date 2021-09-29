# clone caf hals for sm8150
rm -rf hardware/qcom-caf/sm8150/display && git clone https://github.com/naveenjohnsonv/hardware_qcom-caf_sm8150_display.git hardware/qcom-caf/sm8150/display --branch=intf
rm -rf hardware/qcom-caf/sm8150/audio && git clone https://github.com/yaap/hardware_qcom-caf_sm8150_audio.git hardware/qcom-caf/sm8150/audio
rm -rf hardware/qcom-caf/sm8150/media && git clone https://github.com/yaap/hardware_qcom-caf_sm8150_media.git hardware/qcom-caf/sm8150/media
rm -rf hardware/qcom/audio/adsprpcd

# clone vendor and bluetooth stuff
rm -rf vendor/qcom/opensource/dataservices && git clone https://github.com/yaap/vendor_qcom_opensource_dataservices.git vendor/qcom/opensource/dataservices
rm -rf vendor/qcom/opensource/commonsys/bluetooth_ext/ && git clone https://github.com/Evolution-X/vendor_qcom_opensource_bluetooth_ext vendor/qcom/opensource/commonsys/bluetooth_ext/
rm -rf vendor/qcom/opensource/commonsys-intf/bluetooth && git clone https://github.com/Evolution-X/vendor_qcom_opensource_bluetooth-commonsys-intf vendor/qcom/opensource/commonsys-intf/bluetooth
rm -rf system/bt/ && git clone https://github.com/Evolution-X/system_bt.git system/bt
rm -rf vendor/qcom/opensource/commonsys/system/bt && git clone https://github.com/Evolution-X/vendor_qcom_opensource_system_bt vendor/qcom/opensource/commonsys/system/bt/
rm -rf packages/apps/Bluetooth/ && git clone https://github.com/Evolution-X/packages_apps_Bluetooth packages/apps/Bluetooth/
rm -rf vendor/qcom/opensource/commonsys/packages/apps/Bluetooth/ && git clone https://github.com/Evolution-X/vendor_qcom_opensource_packages_apps_Bluetooth.git vendor/qcom/opensource/commonsys/packages/apps/Bluetooth/

# clone wfd without qssi guard
rm -rf vendor/qcom/opensource/wfd-commonsys/ && git clone https://github.com/erikdrozina/android_vendor_qcom_opensource_wfd-commonsys vendor/qcom/opensource/wfd-commonsys 
