#### Added:
- `uiControlDebounceBehavior` in `MimiPersonalizationConfiguration`
- `parameterDataSourceUndefined` in `MimiProcessingError`
- `synchronizeApplicators()` in `MimiProcessingParameter`
- Localization support for Ukrainian (Ukraine)
- `updateState` in `MimiProcessingParameter`
- `ParameterUpdateState` in `MimiProcessingParameter`
- `bundlePublisher` in `MimiUpDownPresetParameterDataSource`
- `bundle` in `MimiUpDownPresetParameterDataSource`
- `session` in `MimiProcessingController`
- `MimiProcessingConfiguration` in `MimiCoreKit`
- `MimiProcessingParameterDataSource` in `MimiCoreKit`
- `dataSource` in `MimiProcessingParameter`

#### Changed:
- Minimum deployment target to `15.0`, dropping support for iOS 14.
- `primaryTint`, `tertiaryTint`, `primaryForeground`, `secondaryForeground`, `primaryText`, `secondaryText` and `hearingTestButtonText` to `MimiHighlightableColor` in `MimiColorBook`
- `MimiDefaultPresetParameterDataSource` to `MimiSinglePresetParameterDataSource`
- `session` to `sessionPublisher` in `MimiProcessingController`
- `value` to `valuePublisher` in `MimiProcessingParameter`
- `isInterrupted` to `isInterruptedPublisher` in `MimiProcessingSession`
- `activate(presetDataSource:)` to `activate(configuration:)` in `MimiProcessingController`


#### Removed:
- `canApply` in `MimiProcessingParameterApplicator`
- `deliveryMode` in `MimiProcessingParameter`
- `applicator(synchronizing value:)` from `MimiProcessingParameter`
- `MimiRemoteProcessingParameter`
- `compactAction` in `MimiFontBook`
- `compactBody` in `MimiFontBook`
- `compactBodyHighlight` in `MimiFontBook`
- `captionHighlight` in `MimiFontBook`
- `MimiCompactTextButton` in `MimiUXKit`
- `MimiCompactActionButton` in `MimiUXKit`
- `compactAction` in `MimiLabel`
- `compactBody` in `MimiLabel`
- `HighlightStyle`, `highlightStyle`, `highlightColor` & `cgColor` in `MimiColor`
- `init(red:green:blue:alpha:)`, `init(cgColor:)` & `init(white:, alpha:)` in `MimiColor`
- `withHighlightStyle(_:)`, `withHighlightColor(_:)` & `color(for state:)` in `MimiColor`
- `mimi` in `UIColor`
- `Color` in `MimiColorBook`
- `init(_ colors: Color...)` in `MimiColorBook`
- `sessionInterruptionInProgress` in `MimiProcessingError`
- `MimiPresetParameterDataSource` in `MimiCoreKit`
- `presetDataSource` in `MimiProcessingSession`
- `launchAccountPortal` in `MimiAuthController`
- 



