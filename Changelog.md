#### Changed:
- Default value of `uiControlDebounceInterval` to `0.2` seconds in `MimiPersonalizationConfiguration`.
- `MimiPersonalizationConfiguration.init` now validates the `uiControlDebounceInterval` parameter and defaults to `0.2` seconds if a value of 0 or less is provided.
- Automated PTT volume adjustment removed manual slider interaction and made volume setting automatic for better user experience
- Automated volume adjustment bulletin removed manual slider interaction and made volume setting automatic for better user experience
- Replaced Mimi logo in AuthFlow in `MimiAuthKit`.


#### Removed:
- `MimiProfileLauncherView` in `MimiSDK`.
- `MimiSnackbarDuration` in `MimiUXKit`.
- `MimiSnackbarPresentable` in `MimiUXKit`.
- `MimiSnackbar` in `MimiUXKit`.
- `MimiSnackbarDefaultContentView` in `MimiUXKit`.
- `MimiToggleButton` in `MimiUXKit`.
- `MimiCoreError.ProcessingError.existingHandler` in `MimiCoreKit`.
- `MimiCoreError.ProcessingError.invalidHandler` in `MimiCoreKit`.
- `MimiCoreError.ProcessingError.invalidPreset` in `MimiCoreKit`.
- `MimiCoreError.ProcessingError.disabled` in `MimiCoreKit`.
- `MimiCoreError.ProcessingError.timeout` in `MimiCoreKit`.
- `MimiCoreError.ProcessingError.unknown` in `MimiCoreKit`.
- `MimiTestResultError.PTT.visualizationMissingFrequencies` in `MimiCoreKit`.
- `MimiTestResultError.PTT.visualizationOutOfCalibratedLimits` in `MimiCoreKit`.
- `MimiTestResultError.PTT.visualizationMissingAudiogram` in `MimiCoreKit`.
- `MimiTestResultError.PTT.visualizationMissingCenterFrequency` in `MimiCoreKit`.
- `MimiProcessingSessionError.sessionNotInterrupted` in `MimiCoreKit`.
- `MimiProcessingSessionError.sessionInterruptionNotFound in `MimiCoreKit`.
- `MimiTestFlowError.unsupportedDevice` in `MimiTestKit`.
- `MimiPersonalizationConfiguration.UIControlDebounceBehavior` in `MimiSDK`.

#### Fixed:
- Issue where the onboarding screen is sometimes not displayed.
- Issue where a Profile card instance would not be deallocated upon removal.


