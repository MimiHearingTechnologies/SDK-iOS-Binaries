#### Changed:
- `MimiPersonalization.Preset.payload` type changed from `Data` to a base64-encoded `String`, matching the backend wire format and the Android SDK. See [MimiSDK 12 Migration Guide](./MimiSDK%2012%20Migration%20Guide.md) for migration steps.
- `MimiProcessingSession.voiceClarity` property of type `MimiVoiceClarityFeature?`. The `voiceClarity` identifier is retained on `MimiProcessingSession` but re-typed to `AnyMimiProcessingFeatureControlling<MimiVoiceClarityFeature>?` (a type-eraser deprecated on iOS 16). Consumers obtain the wrapped `MimiVoiceClarityFeature` by subscribing to `MimiProcessingSession.voiceClarity?.featurePublisher`, which only emits a non-`nil` feature while voice clarity is running. See [MimiSDK 12 Migration Guide](./MimiSDK%2012%20Migration%20Guide.md) for migration steps.


#### Removed:
- `MimiProcessingController.session` convenience property. Subscribe to `MimiProcessingController.sessionPublisher` (or retain the value returned by `activate(configuration:)`) instead — see [MimiSDK 12 Migration Guide](./MimiSDK%2012%20Migration%20Guide.md) for migration steps.



