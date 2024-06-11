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
	v->a[3000] = anon_sym_LBRACE;
	v->a[3001] = actions(45);
	v->a[3002] = 1;
	v->a[3003] = sym_word;
	v->a[3004] = actions(53);
	v->a[3005] = 1;
	v->a[3006] = anon_sym_BANG;
	v->a[3007] = actions(59);
	v->a[3008] = 1;
	v->a[3009] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3010] = actions(61);
	v->a[3011] = 1;
	v->a[3012] = anon_sym_DOLLAR;
	v->a[3013] = actions(63);
	v->a[3014] = 1;
	v->a[3015] = anon_sym_DQUOTE;
	v->a[3016] = actions(67);
	v->a[3017] = 1;
	v->a[3018] = anon_sym_DOLLAR_LBRACE;
	v->a[3019] = actions(69);
	small_parse_table_151(v);
}

void	small_parse_table_151(t_small_parse_table_array *v)
{
	v->a[3020] = 1;
	v->a[3021] = anon_sym_DOLLAR_LPAREN;
	v->a[3022] = actions(71);
	v->a[3023] = 1;
	v->a[3024] = anon_sym_BQUOTE;
	v->a[3025] = actions(73);
	v->a[3026] = 1;
	v->a[3027] = sym_file_descriptor;
	v->a[3028] = actions(75);
	v->a[3029] = 1;
	v->a[3030] = sym_variable_name;
	v->a[3031] = actions(202);
	v->a[3032] = 1;
	v->a[3033] = anon_sym_LF;
	v->a[3034] = state(29);
	v->a[3035] = 1;
	v->a[3036] = aux_sym__case_item_last_repeat2;
	v->a[3037] = state(136);
	v->a[3038] = 1;
	v->a[3039] = aux_sym__statements_repeat1;
	small_parse_table_152(v);
}

void	small_parse_table_152(t_small_parse_table_array *v)
{
	v->a[3040] = state(187);
	v->a[3041] = 1;
	v->a[3042] = sym_command_name;
	v->a[3043] = state(275);
	v->a[3044] = 1;
	v->a[3045] = sym_variable_assignment;
	v->a[3046] = state(647);
	v->a[3047] = 1;
	v->a[3048] = sym_concatenation;
	v->a[3049] = state(736);
	v->a[3050] = 1;
	v->a[3051] = aux_sym_command_repeat1;
	v->a[3052] = state(738);
	v->a[3053] = 1;
	v->a[3054] = sym_file_redirect;
	v->a[3055] = state(1450);
	v->a[3056] = 1;
	v->a[3057] = sym_pipeline;
	v->a[3058] = state(1460);
	v->a[3059] = 1;
	small_parse_table_153(v);
}

void	small_parse_table_153(t_small_parse_table_array *v)
{
	v->a[3060] = aux_sym_redirected_statement_repeat2;
	v->a[3061] = state(2269);
	v->a[3062] = 1;
	v->a[3063] = sym__statement_not_pipeline;
	v->a[3064] = state(2460);
	v->a[3065] = 1;
	v->a[3066] = sym__statements;
	v->a[3067] = actions(11);
	v->a[3068] = 2;
	v->a[3069] = anon_sym_while;
	v->a[3070] = anon_sym_until;
	v->a[3071] = actions(57);
	v->a[3072] = 2;
	v->a[3073] = anon_sym_LT_AMP_DASH;
	v->a[3074] = anon_sym_GT_AMP_DASH;
	v->a[3075] = actions(65);
	v->a[3076] = 2;
	v->a[3077] = sym_raw_string;
	v->a[3078] = sym_number;
	v->a[3079] = state(394);
	small_parse_table_154(v);
}

void	small_parse_table_154(t_small_parse_table_array *v)
{
	v->a[3080] = 5;
	v->a[3081] = sym_arithmetic_expansion;
	v->a[3082] = sym_string;
	v->a[3083] = sym_simple_expansion;
	v->a[3084] = sym_expansion;
	v->a[3085] = sym_command_substitution;
	v->a[3086] = actions(55);
	v->a[3087] = 8;
	v->a[3088] = anon_sym_LT;
	v->a[3089] = anon_sym_GT;
	v->a[3090] = anon_sym_GT_GT;
	v->a[3091] = anon_sym_AMP_GT;
	v->a[3092] = anon_sym_AMP_GT_GT;
	v->a[3093] = anon_sym_LT_AMP;
	v->a[3094] = anon_sym_GT_AMP;
	v->a[3095] = anon_sym_GT_PIPE;
	v->a[3096] = state(1434);
	v->a[3097] = 12;
	v->a[3098] = sym_redirected_statement;
	v->a[3099] = sym_for_statement;
	small_parse_table_155(v);
}

/* EOF small_parse_table_30.c */
