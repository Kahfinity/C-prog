; ModuleID = '/data/user/0/com.dztall.ccr.android.admob/files/Documents/Data/CCR/UserFiles/Example File BAB 12 (Struktur)/cetak1.c.bc'
source_filename = "/data/user/0/com.dztall.ccr.android.admob/files/Documents/Data/CCR/UserFiles/Example File BAB 12 (Struktur)/cetak1.c"
target datalayout = "e-m:e-p:32:32-i64:64-v128:64:128-a:0:32-n32-S64"
target triple = "armv4t-unknown-linux-android"

%struct.date = type { i32, i32, i32 }

@.str = private unnamed_addr constant [38 x i8] c"Enter the current date (mm-dd-yyyy): \00", align 1 ; [#uses=1 type=[38 x i8]*]
@.str.1 = private unnamed_addr constant [9 x i8] c"%d-%d-%d\00", align 1 ; [#uses=1 type=[9 x i8]*]
@cetak_tanggal.nama_bulan = internal unnamed_addr constant [13 x i8*] [i8* getelementptr inbounds ([12 x i8], [12 x i8]* @.str.2, i32 0, i32 0), i8* getelementptr inbounds ([8 x i8], [8 x i8]* @.str.3, i32 0, i32 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @.str.4, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str.5, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str.6, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.7, i32 0, i32 0), i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.8, i32 0, i32 0), i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.9, i32 0, i32 0), i8* getelementptr inbounds ([7 x i8], [7 x i8]* @.str.10, i32 0, i32 0), i8* getelementptr inbounds ([10 x i8], [10 x i8]* @.str.11, i32 0, i32 0), i8* getelementptr inbounds ([8 x i8], [8 x i8]* @.str.12, i32 0, i32 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @.str.13, i32 0, i32 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @.str.14, i32 0, i32 0)], align 4 ; [#uses=2 type=[13 x i8*]*]
@.str.2 = private unnamed_addr constant [12 x i8] c"Wrong Month\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str.3 = private unnamed_addr constant [8 x i8] c"January\00", align 1 ; [#uses=1 type=[8 x i8]*]
@.str.4 = private unnamed_addr constant [9 x i8] c"February\00", align 1 ; [#uses=1 type=[9 x i8]*]
@.str.5 = private unnamed_addr constant [6 x i8] c"March\00", align 1 ; [#uses=1 type=[6 x i8]*]
@.str.6 = private unnamed_addr constant [6 x i8] c"April\00", align 1 ; [#uses=1 type=[6 x i8]*]
@.str.7 = private unnamed_addr constant [4 x i8] c"May\00", align 1 ; [#uses=1 type=[4 x i8]*]
@.str.8 = private unnamed_addr constant [5 x i8] c"June\00", align 1 ; [#uses=1 type=[5 x i8]*]
@.str.9 = private unnamed_addr constant [5 x i8] c"July\00", align 1 ; [#uses=1 type=[5 x i8]*]
@.str.10 = private unnamed_addr constant [7 x i8] c"August\00", align 1 ; [#uses=1 type=[7 x i8]*]
@.str.11 = private unnamed_addr constant [10 x i8] c"September\00", align 1 ; [#uses=1 type=[10 x i8]*]
@.str.12 = private unnamed_addr constant [8 x i8] c"October\00", align 1 ; [#uses=1 type=[8 x i8]*]
@.str.13 = private unnamed_addr constant [9 x i8] c"November\00", align 1 ; [#uses=1 type=[9 x i8]*]
@.str.14 = private unnamed_addr constant [9 x i8] c"December\00", align 1 ; [#uses=1 type=[9 x i8]*]
@.str.15 = private unnamed_addr constant [27 x i8] c"Todays date is %s %d, %d\0A\0A\00", align 1 ; [#uses=1 type=[27 x i8]*]

; [#uses=0]
; Function Attrs: nounwind optsize
define i32 @main() local_unnamed_addr #0 {
  %1 = alloca %struct.date, align 4               ; [#uses=4 type=%struct.date*]
  %2 = bitcast %struct.date* %1 to i8*            ; [#uses=2 type=i8*]
  call void @llvm.lifetime.start.p0i8(i64 12, i8* nonnull %2) #3
  %3 = tail call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @.str, i32 0, i32 0)) #4 ; [#uses=0 type=i32]
  %4 = getelementptr inbounds %struct.date, %struct.date* %1, i32 0, i32 0 ; [#uses=2 type=i32*]
  %5 = getelementptr inbounds %struct.date, %struct.date* %1, i32 0, i32 1 ; [#uses=2 type=i32*]
  %6 = getelementptr inbounds %struct.date, %struct.date* %1, i32 0, i32 2 ; [#uses=2 type=i32*]
  %7 = call i32 (i8*, ...) @scanf(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @.str.1, i32 0, i32 0), i32* nonnull %4, i32* nonnull %5, i32* nonnull %6) #4 ; [#uses=0 type=i32]
  %8 = load i32, i32* %4, align 4, !tbaa !4       ; [#uses=1 type=i32]
  %9 = load i32, i32* %5, align 4, !tbaa !9       ; [#uses=1 type=i32]
  %10 = load i32, i32* %6, align 4, !tbaa !10     ; [#uses=1 type=i32]
  %11 = getelementptr inbounds [13 x i8*], [13 x i8*]* @cetak_tanggal.nama_bulan, i32 0, i32 %8 ; [#uses=1 type=i8**]
  %12 = load i8*, i8** %11, align 4, !tbaa !11    ; [#uses=1 type=i8*]
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @.str.15, i32 0, i32 0), i8* %12, i32 %9, i32 %10) #5 ; [#uses=0 type=i32]
  call void @llvm.lifetime.end.p0i8(i64 12, i8* nonnull %2) #3
  ret i32 0
}

; [#uses=1]
; Function Attrs: argmemonly nounwind
declare void @llvm.lifetime.start.p0i8(i64, i8* nocapture) #1

; [#uses=3]
; Function Attrs: nounwind optsize
declare i32 @printf(i8* nocapture readonly, ...) local_unnamed_addr #2

; [#uses=1]
; Function Attrs: nounwind optsize
declare i32 @scanf(i8* nocapture readonly, ...) local_unnamed_addr #2

; [#uses=0]
; Function Attrs: nounwind optsize
define void @cetak_tanggal(i32, i32, i32) local_unnamed_addr #0 {
  %4 = getelementptr inbounds [13 x i8*], [13 x i8*]* @cetak_tanggal.nama_bulan, i32 0, i32 %0 ; [#uses=1 type=i8**]
  %5 = load i8*, i8** %4, align 4, !tbaa !11      ; [#uses=1 type=i8*]
  %6 = tail call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @.str.15, i32 0, i32 0), i8* %5, i32 %1, i32 %2) #4 ; [#uses=0 type=i32]
  ret void
}

; [#uses=1]
; Function Attrs: argmemonly nounwind
declare void @llvm.lifetime.end.p0i8(i64, i8* nocapture) #1

attributes #0 = { nounwind optsize "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="arm7tdmi" "target-features"="+soft-float,+strict-align,-crypto,-neon,-thumb-mode" "unsafe-fp-math"="false" "use-soft-float"="true" }
attributes #1 = { argmemonly nounwind }
attributes #2 = { nounwind optsize "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="arm7tdmi" "target-features"="+soft-float,+strict-align,-crypto,-neon,-thumb-mode" "unsafe-fp-math"="false" "use-soft-float"="true" }
attributes #3 = { nounwind }
attributes #4 = { optsize }
attributes #5 = { nounwind optsize }

!llvm.module.flags = !{!0, !1, !2}
!llvm.ident = !{!3}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 1, !"min_enum_size", i32 4}
!2 = !{i32 7, !"PIC Level", i32 1}
!3 = !{!"clang version 6.0.0 (tags/RELEASE_600/final)"}
!4 = !{!5, !6, i64 0}
!5 = !{!"date", !6, i64 0, !6, i64 4, !6, i64 8}
!6 = !{!"int", !7, i64 0}
!7 = !{!"omnipotent char", !8, i64 0}
!8 = !{!"Simple C/C++ TBAA"}
!9 = !{!5, !6, i64 4}
!10 = !{!5, !6, i64 8}
!11 = !{!12, !12, i64 0}
!12 = !{!"any pointer", !7, i64 0}
