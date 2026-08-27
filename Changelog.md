#### Changed:
- Updated localization strings to `v6.0.4`.



#### Fixed:
- A crash on iOS 15 when a processing session was created while sound personalization data was present. Collecting the session's suspendable parameters cast `media.isEnabled` out of `any MimiProcessingParameter<Bool>`, and casting out of a parameterized existential relies on runtime support that only exists from iOS 16 onwards, so the cast trapped on iOS 15. The suspendable parameter is now reached without a runtime cast.
- The \"Practice\" action in the pause interruption used Traditional Chinese characters in the Simplified Chinese (`zh-CN`) locale.
- The \"Device volume changed\" interruption could get stuck showing a loading indicator during a hearing test. After tapping \"OK\", changing the device volume again before the interruption dismissed left the dialog loading with its action covered, so it could not be retried. The loading indicator is now stopped when the volume moves away from the target again while the interruption is still on screen, and is bounded by a timeout so the action is always restored even when the volume never settles.


