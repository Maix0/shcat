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
	v->a[3000] = state(636);
	v->a[3001] = 1;
	v->a[3002] = sym_concatenation;
	v->a[3003] = state(677);
	v->a[3004] = 1;
	v->a[3005] = sym_file_redirect;
	v->a[3006] = state(752);
	v->a[3007] = 1;
	v->a[3008] = aux_sym_command_repeat1;
	v->a[3009] = state(1133);
	v->a[3010] = 1;
	v->a[3011] = sym_pipeline;
	v->a[3012] = state(1226);
	v->a[3013] = 1;
	v->a[3014] = aux_sym_redirected_statement_repeat2;
	v->a[3015] = state(2111);
	v->a[3016] = 1;
	v->a[3017] = sym__statement_not_pipeline;
	v->a[3018] = state(2122);
	v->a[3019] = 1;
	small_parse_table_151(v);
}

void	small_parse_table_151(t_small_parse_table_array *v)
{
	v->a[3020] = sym__statements;
	v->a[3021] = actions(160);
	v->a[3022] = 2;
	v->a[3023] = anon_sym_while;
	v->a[3024] = anon_sym_until;
	v->a[3025] = actions(174);
	v->a[3026] = 2;
	v->a[3027] = anon_sym_LT_AMP_DASH;
	v->a[3028] = anon_sym_GT_AMP_DASH;
	v->a[3029] = actions(182);
	v->a[3030] = 2;
	v->a[3031] = sym_raw_string;
	v->a[3032] = sym_number;
	v->a[3033] = state(385);
	v->a[3034] = 5;
	v->a[3035] = sym_arithmetic_expansion;
	v->a[3036] = sym_string;
	v->a[3037] = sym_simple_expansion;
	v->a[3038] = sym_expansion;
	v->a[3039] = sym_command_substitution;
	small_parse_table_152(v);
}

void	small_parse_table_152(t_small_parse_table_array *v)
{
	v->a[3040] = actions(172);
	v->a[3041] = 6;
	v->a[3042] = anon_sym_LT;
	v->a[3043] = anon_sym_GT;
	v->a[3044] = anon_sym_GT_GT;
	v->a[3045] = anon_sym_LT_AMP;
	v->a[3046] = anon_sym_GT_AMP;
	v->a[3047] = anon_sym_GT_PIPE;
	v->a[3048] = state(1075);
	v->a[3049] = 12;
	v->a[3050] = sym_redirected_statement;
	v->a[3051] = sym_for_statement;
	v->a[3052] = sym_while_statement;
	v->a[3053] = sym_if_statement;
	v->a[3054] = sym_case_statement;
	v->a[3055] = sym_function_definition;
	v->a[3056] = sym_compound_statement;
	v->a[3057] = sym_subshell;
	v->a[3058] = sym_list;
	v->a[3059] = sym_negated_command;
	small_parse_table_153(v);
}

void	small_parse_table_153(t_small_parse_table_array *v)
{
	v->a[3060] = sym_command;
	v->a[3061] = sym__variable_assignments;
	v->a[3062] = 34;
	v->a[3063] = actions(3);
	v->a[3064] = 1;
	v->a[3065] = sym_comment;
	v->a[3066] = actions(156);
	v->a[3067] = 1;
	v->a[3068] = sym_word;
	v->a[3069] = actions(158);
	v->a[3070] = 1;
	v->a[3071] = anon_sym_for;
	v->a[3072] = actions(162);
	v->a[3073] = 1;
	v->a[3074] = anon_sym_if;
	v->a[3075] = actions(164);
	v->a[3076] = 1;
	v->a[3077] = anon_sym_case;
	v->a[3078] = actions(166);
	v->a[3079] = 1;
	small_parse_table_154(v);
}

void	small_parse_table_154(t_small_parse_table_array *v)
{
	v->a[3080] = anon_sym_LPAREN;
	v->a[3081] = actions(168);
	v->a[3082] = 1;
	v->a[3083] = anon_sym_LBRACE;
	v->a[3084] = actions(170);
	v->a[3085] = 1;
	v->a[3086] = anon_sym_BANG;
	v->a[3087] = actions(176);
	v->a[3088] = 1;
	v->a[3089] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3090] = actions(178);
	v->a[3091] = 1;
	v->a[3092] = anon_sym_DOLLAR;
	v->a[3093] = actions(180);
	v->a[3094] = 1;
	v->a[3095] = anon_sym_DQUOTE;
	v->a[3096] = actions(184);
	v->a[3097] = 1;
	v->a[3098] = anon_sym_DOLLAR_LBRACE;
	v->a[3099] = actions(186);
	small_parse_table_155(v);
}

/* EOF small_parse_table_30.c */
