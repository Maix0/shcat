/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_30.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_150(t_small_parse_table_array *v)
{
	v->a[3000] = 2;
	v->a[3001] = sym_file_descriptor;
	v->a[3002] = aux_sym_heredoc_redirect_token1;
	v->a[3003] = state(555);
	v->a[3004] = 7;
	v->a[3005] = sym_arithmetic_expansion;
	v->a[3006] = sym_brace_expression;
	v->a[3007] = sym_string;
	v->a[3008] = sym_number;
	v->a[3009] = sym_simple_expansion;
	v->a[3010] = sym_expansion;
	v->a[3011] = sym_command_substitution;
	v->a[3012] = actions(1278);
	v->a[3013] = 22;
	v->a[3014] = anon_sym_esac;
	v->a[3015] = anon_sym_PIPE;
	v->a[3016] = anon_sym_SEMI_SEMI;
	v->a[3017] = anon_sym_SEMI_AMP;
	v->a[3018] = anon_sym_SEMI_SEMI_AMP;
	v->a[3019] = anon_sym_PIPE_AMP;
	small_parse_table_151(v);
}

void	small_parse_table_151(t_small_parse_table_array *v)
{
	v->a[3020] = anon_sym_AMP_AMP;
	v->a[3021] = anon_sym_PIPE_PIPE;
	v->a[3022] = anon_sym_LT;
	v->a[3023] = anon_sym_GT;
	v->a[3024] = anon_sym_GT_GT;
	v->a[3025] = anon_sym_AMP_GT;
	v->a[3026] = anon_sym_AMP_GT_GT;
	v->a[3027] = anon_sym_LT_AMP;
	v->a[3028] = anon_sym_GT_AMP;
	v->a[3029] = anon_sym_GT_PIPE;
	v->a[3030] = anon_sym_LT_AMP_DASH;
	v->a[3031] = anon_sym_GT_AMP_DASH;
	v->a[3032] = anon_sym_LT_LT;
	v->a[3033] = anon_sym_LT_LT_DASH;
	v->a[3034] = anon_sym_AMP;
	v->a[3035] = anon_sym_SEMI;
	v->a[3036] = 23;
	v->a[3037] = actions(3);
	v->a[3038] = 1;
	v->a[3039] = sym_comment;
	small_parse_table_152(v);
}

void	small_parse_table_152(t_small_parse_table_array *v)
{
	v->a[3040] = actions(1146);
	v->a[3041] = 1;
	v->a[3042] = anon_sym_LPAREN;
	v->a[3043] = actions(1148);
	v->a[3044] = 1;
	v->a[3045] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3046] = actions(1150);
	v->a[3047] = 1;
	v->a[3048] = anon_sym_DOLLAR;
	v->a[3049] = actions(1152);
	v->a[3050] = 1;
	v->a[3051] = sym__special_character;
	v->a[3052] = actions(1154);
	v->a[3053] = 1;
	v->a[3054] = anon_sym_DQUOTE;
	v->a[3055] = actions(1156);
	v->a[3056] = 1;
	v->a[3057] = aux_sym_number_token1;
	v->a[3058] = actions(1158);
	v->a[3059] = 1;
	small_parse_table_153(v);
}

void	small_parse_table_153(t_small_parse_table_array *v)
{
	v->a[3060] = aux_sym_number_token2;
	v->a[3061] = actions(1160);
	v->a[3062] = 1;
	v->a[3063] = anon_sym_DOLLAR_LBRACE;
	v->a[3064] = actions(1162);
	v->a[3065] = 1;
	v->a[3066] = anon_sym_DOLLAR_LPAREN;
	v->a[3067] = actions(1164);
	v->a[3068] = 1;
	v->a[3069] = anon_sym_BQUOTE;
	v->a[3070] = actions(1166);
	v->a[3071] = 1;
	v->a[3072] = anon_sym_DOLLAR_BQUOTE;
	v->a[3073] = actions(1168);
	v->a[3074] = 1;
	v->a[3075] = sym_test_operator;
	v->a[3076] = actions(1170);
	v->a[3077] = 1;
	v->a[3078] = sym__bare_dollar;
	v->a[3079] = actions(1172);
	small_parse_table_154(v);
}

void	small_parse_table_154(t_small_parse_table_array *v)
{
	v->a[3080] = 1;
	v->a[3081] = sym__brace_start;
	v->a[3082] = state(356);
	v->a[3083] = 1;
	v->a[3084] = aux_sym_command_repeat2;
	v->a[3085] = state(1233);
	v->a[3086] = 1;
	v->a[3087] = aux_sym__literal_repeat1;
	v->a[3088] = state(1281);
	v->a[3089] = 1;
	v->a[3090] = sym_concatenation;
	v->a[3091] = state(2297);
	v->a[3092] = 1;
	v->a[3093] = sym_subshell;
	v->a[3094] = actions(1144);
	v->a[3095] = 2;
	v->a[3096] = sym_raw_string;
	v->a[3097] = sym_word;
	v->a[3098] = actions(759);
	v->a[3099] = 3;
	small_parse_table_155(v);
}

/* EOF small_parse_table_30.c */
