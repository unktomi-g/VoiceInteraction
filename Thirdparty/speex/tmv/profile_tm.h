/* Copyright (C) 2007 Hong Zhiqian */
/**
   @file profile_tm.h
   @author Hong Zhiqian
   @brief Various compatibility routines for Speex (TriMedia version)
*/
/*
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions
   are met:
   
   - Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
   
   - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
   
   - Neither the name of the Xiph.org Foundation nor the names of its
   contributors may be used to endorse or promote products derived from
   this software without specific prior written permission.
   
   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR
   CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
/**
*	@remarks	This file provide some capabilities to measure clock cycles.
*				Use this if unable to compile with TriMedia profile options
*/

extern int __profile_begin;
extern int __profile_end;

#if TM_PROFILE
#define	PROFILE_START()												\
		{															\
			__profile_begin = cycles();								\
		}															\

#define PROFILE_STOP()												\
		{															\
			__profile_end = cycles();								\
			printf("%s\t%d\n", __FUNCTION__, end - begin);			\
		}															\

#else
#define PROFILE_START()
#define PROFILE_STOP()
#endif

#if TM_PROFILE_SPXAUTOCORR
#define	_SPX_AUTOCORR_START()	PROFILE_START()
#define _SPX_AUTOCORR_STOP()	PROFILE_STOP()
#else
#define _SPX_AUTOCORR_START()
#define	_SPX_AUTOCORR_STOP()
#endif

#if TM_PROFILE_INNERPROD
#define	INNERPROD_START()	PROFILE_START()
#define INNERPROD_STOP()	PROFILE_STOP()
#else
#define INNERPROD_START()
#define	INNERPROD_STOP()
#endif

#if TM_PROFILE_PITCHXCORR
#define	PITCHXCORR_START()	PROFILE_START()
#define PITCHXCORR_STOP()	PROFILE_STOP()
#else
#define PITCHXCORR_START()
#define	PITCHXCORR_STOP()
#endif

#if TM_PROFILE_COMPUTEPITCHERROR
#define COMPUTEPITCHERROR_START()	PROFILE_START()
#define COMPUTEPITCHERROR_STOP()	PROFILE_STOP()
#else
#define COMPUTEPITCHERROR_START()
#define COMPUTEPITCHERROR_STOP()
#endif

#if TM_PROFILE_PITCHGAINSEARCH3TAPVQ
#define PITCHGAINSEARCH3TAPVQ_START()	PROFILE_START()
#define PITCHGAINSEARCH3TAPVQ_STOP()	PROFILE_STOP()
#else
#define PITCHGAINSEARCH3TAPVQ_START()
#define PITCHGAINSEARCH3TAPVQ_STOP()
#endif

#if TM_PROFILE_OPENLOOPNBESTPITCH
#define OPENLOOPNBESTPITCH_START()	PROFILE_START()
#define OPENLOOPNBESTPITCH_STOP()	PROFILE_STOP()
#else
#define OPENLOOPNBESTPITCH_START()
#define OPENLOOPNBESTPITCH_STOP()
#endif


#if TM_PROFILE_LSP_INTERPOLATE
#define	LSPINTERPOLATE_START()	PROFILE_START()
#define LSPINTERPOLATE_STOP()	PROFILE_STOP()
#else
#define LSPINTERPOLATE_START()
#define	LSPINTERPOLATE_STOP()
#endif

#if TM_PROFILE_CHEBPOLYEVA
#define	CHEBPOLYEVA_START()	PROFILE_START()
#define CHEBPOLYEVA_STOP()	PROFILE_STOP()
#else
#define CHEBPOLYEVA_START()
#define	CHEBPOLYEVA_STOP()
#endif


#if TM_PROFILE_COMPUTEQUANTWEIGHTS
#define	COMPUTEQUANTWEIGHTS_START()	PROFILE_START()
#define COMPUTEQUANTWEIGHTS_STOP()	PROFILE_STOP()
#else
#define COMPUTEQUANTWEIGHTS_START()
#define	COMPUTEQUANTWEIGHTS_STOP()
#endif

#if TM_PROFILE_LSPQUANT
#define	LSPQUANT_START()	PROFILE_START()
#define LSPQUANT_STOP()		PROFILE_STOP()
#else
#define LSPQUANT_START()
#define	LSPQUANT_STOP()
#endif

#if TM_PROFILE_LSPWEIGHTQUANT
#define	LSPWEIGHTQUANT_START()		PROFILE_START()
#define LSPWEIGHTQUANT_STOP()		PROFILE_STOP()
#else
#define LSPWEIGHTQUANT_START()
#define	LSPWEIGHTQUANT_STOP()
#endif

#if TM_PROFILE_FIRMEM16
#define	FIRMEM16_START()	PROFILE_START()
#define FIRMEM16_STOP()		PROFILE_STOP()
#else
#define FIRMEM16_START()
#define	FIRMEM16_STOP()
#endif

#if TM_PROFILE_IIRMEM16
#define	IIRMEM16_START()	PROFILE_START()
#define IIRMEM16_STOP()		PROFILE_STOP()
#else
#define IIRMEM16_START()
#define	IIRMEM16_STOP()
#endif

#if TM_PROFILE_FILTERMEM16
#define	FILTERMEM16_START()		PROFILE_START()
#define FILTERMEM16_STOP()		PROFILE_STOP()
#else
#define FILTERMEM16_START()
#define	FILTERMEM16_STOP()
#endif

#if TM_PROFILE_COMPUTERMS16
#define	COMPUTERMS16_START()	PROFILE_START()
#define COMPUTERMS16_STOP()		PROFILE_STOP()
#else
#define COMPUTERMS16_START()
#define	COMPUTERMS16_STOP()
#endif
	
#if TM_PROFILE_NORMALIZE16
#define	NORMALIZE16_START()		PROFILE_START()
#define NORMALIZE16_STOP()		PROFILE_STOP()
#else
#define NORMALIZE16_START()
#define	NORMALIZE16_STOP()
#endif

#if TM_PROFILE_BWLPC
#define	BWLPC_START()		PROFILE_START()
#define BWLPC_STOP()		PROFILE_STOP()
#else
#define BWLPC_START()
#define BWLPC_STOP()
#endif

#if TM_PROFILE_HIGHPASS
#define	HIGHPASS_START()	PROFILE_START()
#define HIGHPASS_STOP()		PROFILE_STOP()
#else
#define HIGHPASS_START()
#define HIGHPASS_STOP()
#endif

#if TM_PROFILE_SIGNALMUL
#define	SIGNALMUL_START()		PROFILE_START()
#define SIGNALMUL_STOP()		PROFILE_STOP()
#else
#define SIGNALMUL_START()
#define SIGNALMUL_STOP()
#endif

#if TM_PROFILE_SIGNALDIV
#define	SIGNALDIV_START()		PROFILE_START()
#define SIGNALDIV_STOP()		PROFILE_STOP()
#else
#define SIGNALDIV_START()
#define SIGNALDIV_STOP()
#endif

#if TM_PROFILE_COMPUTEIMPULSERESPONSE
#define	COMPUTEIMPULSERESPONSE_START()		PROFILE_START()
#define COMPUTEIMPULSERESPONSE_STOP()		PROFILE_STOP()
#else
#define COMPUTEIMPULSERESPONSE_START()
#define COMPUTEIMPULSERESPONSE_STOP()
#endif

#if TM_PROFILE_COMPUTEWEIGHTEDCODEBOOK
#define	COMPUTEWEIGHTEDCODEBOOK_START()			PROFILE_START()
#define COMPUTEWEIGHTEDCODEBOOK_STOP()			PROFILE_STOP()
#else
#define COMPUTEWEIGHTEDCODEBOOK_START()
#define	COMPUTEWEIGHTEDCODEBOOK_STOP()
#endif

#if TM_PROFILE_TARGETUPDATE
#define	TARGETUPDATE_START()			PROFILE_START()
#define TARGETUPDATE_STOP()				PROFILE_STOP()
#else
#define TARGETUPDATE_START()
#define	TARGETUPDATE_STOP()
#endif


#if TM_PROFILE_VQNBEST
#define	VQNBEST_START()		PROFILE_START()
#define VQNBEST_STOP()		PROFILE_STOP()
#else
#define VQNBEST_START()
#define	VQNBEST_STOP()
#endif

#if TM_PROFILE_VQNBESTSIGN
#define	VQNBESTSIGN_START()		PROFILE_START()
#define VQNBESTSIGN_STOP()		PROFILE_STOP()
#else
#define VQNBESTSIGN_START()
#define	VQNBESTSIGN_STOP()
#endif

#if TM_PROFILE_PREPROCESSANALYSIS
#define	PREPROCESSANAYLSIS_START()		PROFILE_START()
#define PREPROCESSANAYLSIS_STOP()		PROFILE_STOP()
#else
#define PREPROCESSANAYLSIS_START()
#define	PREPROCESSANAYLSIS_STOP()
#endif

#if TM_PROFILE_UPDATENOISEPROB
#define	UPDATENOISEPROB_START()		PROFILE_START()
#define UPDATENOISEPROB_STOP()		PROFILE_STOP()
#else
#define UPDATENOISEPROB_START()
#define	UPDATENOISEPROB_STOP()
#endif

#if TM_PROFILE_COMPUTEGAINFLOOR
#define	COMPUTEGAINFLOOR_START()	PROFILE_START()
#define COMPUTEGAINFLOOR_STOP()		PROFILE_STOP()
#else
#define COMPUTEGAINFLOOR_START()
#define	COMPUTEGAINFLOOR_STOP()
#endif

#if TM_PROFILE_FILTERDCNOTCH16
#define FILTERDCNOTCH16_START()		PROFILE_START()
#define FILTERDCNOTCH16_STOP()		PROFILE_STOP()
#else
#define FILTERDCNOTCH16_START()
#define	FILTERDCNOTCH16_STOP()
#endif

#if TM_PROFILE_MDFINNERPROD
#define MDFINNERPROD_START()		PROFILE_START()
#define MDFINNERPROD_STOP()			PROFILE_STOP()
#else
#define MDFINNERPROD_START()
#define	MDFINNERPROD_STOP()
#endif

#if TM_PROFILE_SPECTRALMULACCUM
#define SPECTRALMULACCUM_START()		PROFILE_START()
#define SPECTRALMULACCUM_STOP()			PROFILE_STOP()
#else
#define SPECTRALMULACCUM_START()
#define	SPECTRALMULACCUM_STOP()
#endif

#if TM_PROFILE_WEIGHTEDSPECTRALMULCONJ
#define WEIGHTEDSPECTRALMULCONJ_START()		PROFILE_START()
#define WEIGHTEDSPECTRALMULCONJ_STOP()		PROFILE_STOP()
#else
#define WEIGHTEDSPECTRALMULCONJ_START()
#define	WEIGHTEDSPECTRALMULCONJ_STOP()
#endif

#if TM_PROFILE_MDFADJUSTPROP
#define MDFADJUSTPROP_START()		PROFILE_START()
#define MDFADJUSTPROP_STOP()		PROFILE_STOP()
#else
#define MDFADJUSTPROP_START()
#define	MDFADJUSTPROP_STOP()
#endif

#if TM_PROFILE_SPEEXECHOGETRESIDUAL
#define SPEEXECHOGETRESIDUAL_START()	PROFILE_START()
#define SPEEXECHOGETRESIDUAL_STOP()		PROFILE_STOP()
#else
#define SPEEXECHOGETRESIDUAL_START()
#define	SPEEXECHOGETRESIDUAL_STOP()
#endif

#if TM_PROFILE_LSPENFORCEMARGIN
#define LSPENFORCEMARGIN_START()	PROFILE_START()
#define LSPENFORCEMARGIN_STOP()		PROFILE_STOP()
#else
#define LSPENFORCEMARGIN_START()
#define	LSPENFORCEMARGIN_STOP()
#endif

#if TM_PROFILE_LSPTOLPC
#define LSPTOLPC_START()	PROFILE_START()
#define LSPTOLPC_STOP()		PROFILE_STOP()
#else
#define LSPTOLPC_START()
#define	LSPTOLPC_STOP()
#endif

#if TM_PROFILE_MAXIMIZERANGE
#define MAXIMIZERANGE_START()	PROFILE_START()
#define MAXIMIZERANGE_STOP()	PROFILE_STOP()
#else
#define MAXIMIZERANGE_START()
#define	MAXIMIZERANGE_STOP()
#endif

#if TM_PROFILE_RENORMRANGE
#define RENORMRANGE_START()	PROFILE_START()
#define RENORMRANGE_STOP()	PROFILE_STOP()
#else
#define RENORMRANGE_START()
#define	RENORMRANGE_STOP()
#endif

#if TM_PROFILE_POWERSPECTRUM
#define POWERSPECTRUM_START()	PROFILE_START()
#define POWERSPECTRUM_STOP()	PROFILE_STOP()
#else
#define POWERSPECTRUM_START()
#define	POWERSPECTRUM_STOP()
#endif

#if TM_PROFILE_QMFSYNTH
#define QMFSYNTH_START()	PROFILE_START()
#define QMFSYNTH_STOP()		PROFILE_STOP()
#else
#define QMFSYNTH_START()
#define	QMFSYNTH_STOP()
#endif

#if TM_PROFILE_QMFDECOMP
#define QMFDECOMP_START()	PROFILE_START()
#define QMFDECOMP_STOP()	PROFILE_STOP()
#else
#define QMFDECOMP_START()
#define	QMFDECOMP_STOP()
#endif

#if TM_PROFILE_FILTERBANKCOMPUTEBANK32
#define FILTERBANKCOMPUTEBANK32_START()	PROFILE_START()
#define FILTERBANKCOMPUTEBANK32_STOP()	PROFILE_STOP()
#else
#define FILTERBANKCOMPUTEBANK32_START()
#define	FILTERBANKCOMPUTEBANK32_STOP()
#endif

#if TM_PROFILE_FILTERBANKCOMPUTEPSD16
#define FILTERBANKCOMPUTEPSD16_START()	PROFILE_START()
#define FILTERBANKCOMPUTEPSD16_STOP()	PROFILE_STOP()
#else
#define FILTERBANKCOMPUTEPSD16_START()
#define	FILTERBANKCOMPUTEPSD16_STOP()
#endif


