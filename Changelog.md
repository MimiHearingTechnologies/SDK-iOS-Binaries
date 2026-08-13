#### Added:
- `headphoneIdentifier` property to `MimiProcessorMetadata`, exposing the identifier of the headphone associated with the Mimi Processor.
- **[Experimental]*`loadVisualization()` to `MimiUpDownPresetParameterDataSource`, returning `MimiUpDownBundleVisualizationData` — the user's hearing data (`original`) and the compensation applied by each preset of the `upDown` bundle (`compensation`), per ear. Values are normalized 0.0–1.0, ordered by frequency `[250, 500, 1000, 2000, 4000, 8000]` Hz. The request is scoped to the data source's `fitting`, so the visualization describes the same presets that data source provides. The call has no side effects on the processing chain and is not cached. This API is experimental and may change or be removed in a future release.
- `MimiPersonalization.Preset.init(payload:)` is now public, creating a preset from a base64-encoded payload with the identifier derived from that payload. This matches the Android SDK's `Personalization.PersonalizationPreset(payload)`.

#### Changed:
- Removed the headphone icon from the "Headphones Disconnected" and "Headphones Connected" interruption screens, leaving text only (title, message, and CTA).
- Bulletins whose content does not end in a visible button now use a 32pt bottom margin (previously 16pt), matching design.
- `MimiActivityIndicator` finish states now use the theme's semantic colors: the success (checkmark) icon uses `theme.colors.success` and the error icon uses `theme.colors.error`. These semantic colors take precedence over a custom `MimiActivityIndicator.color`.
- Removed the headphone icon from the "Can't hear anything?" troubleshoot sound screen, leaving text only (title, message, and CTA).
- Bulletins whose text is directly followed by an action button now use a 32pt gap above the button (previously 16pt), matching design. When an image sits between the text and the button, the image's own inset is used instead.
- Internal: cleaned up Xcode compiler warnings (Swift-6 actor isolation, non-frozen enum switches, deprecated `CC_MD5`, retroactive `Hashable` conformance) and several mechanical SwiftLint violations across the SDK targets. No functional change.
- Updated icons for the Headphones Connection Step in the Test Flow.
- Internal: `DefaultProcessingParameter` now erases its `valuePublisher` and `updateState` publishers once at initialization and exposes a single stable `AnyPublisher` for each, rather than allocating a new erased publisher on every property access. No functional change.

#### Deprecated:
- `MimiActivityIndicator.color` is deprecated. The success and error icon colors are determined by the theme and ignore this property; it only affects the activity spinner color and will be removed in a future release.
- The following Voice Clarity modules on `MimiVoiceClarityFeature` are deprecated as they are no longer in active use and will be removed in a future release: `equalizer` (`MimiEqualizerModule`), `transparencyEqualizer` (`MimiTransparencyEqualizerModule`), `afc` (`MimiAFCModule`), `impulseAGC` (`MimiImpulseAGCModule`), `fbc` (`MimiFBCModule`), `howlingDetector` (`MimiHowlingDetectorModule`), and `drc` (`MimiDRCModule`).


#### Fixed:
- Voice Clarity is now suspended and restored alongside Sound Personalization for the duration of a hearing test.


