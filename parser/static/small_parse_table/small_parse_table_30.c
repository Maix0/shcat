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
	v->a[3000] = actions(57);
	v->a[3001] = 1;
	v->a[3002] = anon_sym_BANG;
	v->a[3003] = actions(63);
	v->a[3004] = 1;
	v->a[3005] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3006] = actions(65);
	v->a[3007] = 1;
	v->a[3008] = anon_sym_DOLLAR;
	v->a[3009] = actions(67);
	v->a[3010] = 1;
	v->a[3011] = anon_sym_DQUOTE;
	v->a[3012] = actions(69);
	v->a[3013] = 1;
	v->a[3014] = sym_raw_string;
	v->a[3015] = actions(71);
	v->a[3016] = 1;
	v->a[3017] = aux_sym_number_token1;
	v->a[3018] = actions(73);
	v->a[3019] = 1;
	small_parse_table_151(v);
}

void	small_parse_table_151(t_small_parse_table_array *v)
{
	v->a[3020] = aux_sym_number_token2;
	v->a[3021] = actions(75);
	v->a[3022] = 1;
	v->a[3023] = anon_sym_DOLLAR_LBRACE;
	v->a[3024] = actions(77);
	v->a[3025] = 1;
	v->a[3026] = anon_sym_DOLLAR_LPAREN;
	v->a[3027] = actions(79);
	v->a[3028] = 1;
	v->a[3029] = anon_sym_BQUOTE;
	v->a[3030] = actions(81);
	v->a[3031] = 1;
	v->a[3032] = sym_file_descriptor;
	v->a[3033] = actions(83);
	v->a[3034] = 1;
	v->a[3035] = sym_variable_name;
	v->a[3036] = actions(218);
	v->a[3037] = 1;
	v->a[3038] = anon_sym_LF;
	v->a[3039] = state(22);
	small_parse_table_152(v);
}

void	small_parse_table_152(t_small_parse_table_array *v)
{
	v->a[3040] = 1;
	v->a[3041] = aux_sym__case_item_last_repeat2;
	v->a[3042] = state(131);
	v->a[3043] = 1;
	v->a[3044] = aux_sym__statements_repeat1;
	v->a[3045] = state(190);
	v->a[3046] = 1;
	v->a[3047] = sym_command_name;
	v->a[3048] = state(314);
	v->a[3049] = 1;
	v->a[3050] = sym_variable_assignment;
	v->a[3051] = state(582);
	v->a[3052] = 1;
	v->a[3053] = sym_concatenation;
	v->a[3054] = state(587);
	v->a[3055] = 1;
	v->a[3056] = aux_sym_command_repeat1;
	v->a[3057] = state(718);
	v->a[3058] = 1;
	v->a[3059] = sym_file_redirect;
	small_parse_table_153(v);
}

void	small_parse_table_153(t_small_parse_table_array *v)
{
	v->a[3060] = state(1211);
	v->a[3061] = 1;
	v->a[3062] = sym_pipeline;
	v->a[3063] = state(1213);
	v->a[3064] = 1;
	v->a[3065] = aux_sym_redirected_statement_repeat2;
	v->a[3066] = state(2035);
	v->a[3067] = 1;
	v->a[3068] = sym__statement_not_pipeline;
	v->a[3069] = state(2094);
	v->a[3070] = 1;
	v->a[3071] = sym__statements;
	v->a[3072] = actions(11);
	v->a[3073] = 2;
	v->a[3074] = anon_sym_while;
	v->a[3075] = anon_sym_until;
	v->a[3076] = actions(61);
	v->a[3077] = 2;
	v->a[3078] = anon_sym_LT_AMP_DASH;
	v->a[3079] = anon_sym_GT_AMP_DASH;
	small_parse_table_154(v);
}

void	small_parse_table_154(t_small_parse_table_array *v)
{
	v->a[3080] = state(397);
	v->a[3081] = 6;
	v->a[3082] = sym_arithmetic_expansion;
	v->a[3083] = sym_string;
	v->a[3084] = sym_number;
	v->a[3085] = sym_simple_expansion;
	v->a[3086] = sym_expansion;
	v->a[3087] = sym_command_substitution;
	v->a[3088] = actions(59);
	v->a[3089] = 8;
	v->a[3090] = anon_sym_LT;
	v->a[3091] = anon_sym_GT;
	v->a[3092] = anon_sym_GT_GT;
	v->a[3093] = anon_sym_AMP_GT;
	v->a[3094] = anon_sym_AMP_GT_GT;
	v->a[3095] = anon_sym_LT_AMP;
	v->a[3096] = anon_sym_GT_AMP;
	v->a[3097] = anon_sym_GT_PIPE;
	v->a[3098] = state(1140);
	v->a[3099] = 12;
	small_parse_table_155(v);
}

/* EOF small_parse_table_30.c */
