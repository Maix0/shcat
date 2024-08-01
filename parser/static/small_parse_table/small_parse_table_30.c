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
	v->a[3000] = sym_pipeline;
	v->a[3001] = state(1126);
	v->a[3002] = 1;
	v->a[3003] = aux_sym_redirected_statement_repeat2;
	v->a[3004] = state(1561);
	v->a[3005] = 1;
	v->a[3006] = sym__statement_not_pipeline;
	v->a[3007] = actions(11);
	v->a[3008] = 2;
	v->a[3009] = anon_sym_while;
	v->a[3010] = anon_sym_until;
	v->a[3011] = actions(59);
	v->a[3012] = 2;
	v->a[3013] = sym_raw_string;
	v->a[3014] = sym_number;
	v->a[3015] = actions(51);
	v->a[3016] = 3;
	v->a[3017] = anon_sym_LT;
	v->a[3018] = anon_sym_GT;
	v->a[3019] = anon_sym_GT_GT;
	small_parse_table_151(v);
}

void	small_parse_table_151(t_small_parse_table_array *v)
{
	v->a[3020] = actions(184);
	v->a[3021] = 3;
	v->a[3022] = anon_sym_fi;
	v->a[3023] = anon_sym_elif;
	v->a[3024] = anon_sym_else;
	v->a[3025] = state(401);
	v->a[3026] = 5;
	v->a[3027] = sym_arithmetic_expansion;
	v->a[3028] = sym_string;
	v->a[3029] = sym_simple_expansion;
	v->a[3030] = sym_expansion;
	v->a[3031] = sym_command_substitution;
	v->a[3032] = state(905);
	v->a[3033] = 12;
	v->a[3034] = sym_redirected_statement;
	v->a[3035] = sym_for_statement;
	v->a[3036] = sym_while_statement;
	v->a[3037] = sym_if_statement;
	v->a[3038] = sym_case_statement;
	v->a[3039] = sym_function_definition;
	small_parse_table_152(v);
}

void	small_parse_table_152(t_small_parse_table_array *v)
{
	v->a[3040] = sym_compound_statement;
	v->a[3041] = sym_subshell;
	v->a[3042] = sym_list;
	v->a[3043] = sym_negated_command;
	v->a[3044] = sym_command;
	v->a[3045] = sym__variable_assignments;
	v->a[3046] = 32;
	v->a[3047] = actions(3);
	v->a[3048] = 1;
	v->a[3049] = sym_comment;
	v->a[3050] = actions(9);
	v->a[3051] = 1;
	v->a[3052] = anon_sym_for;
	v->a[3053] = actions(13);
	v->a[3054] = 1;
	v->a[3055] = anon_sym_if;
	v->a[3056] = actions(15);
	v->a[3057] = 1;
	v->a[3058] = anon_sym_case;
	v->a[3059] = actions(17);
	small_parse_table_153(v);
}

void	small_parse_table_153(t_small_parse_table_array *v)
{
	v->a[3060] = 1;
	v->a[3061] = anon_sym_LPAREN;
	v->a[3062] = actions(19);
	v->a[3063] = 1;
	v->a[3064] = anon_sym_LBRACE;
	v->a[3065] = actions(41);
	v->a[3066] = 1;
	v->a[3067] = sym_word;
	v->a[3068] = actions(49);
	v->a[3069] = 1;
	v->a[3070] = anon_sym_BANG;
	v->a[3071] = actions(53);
	v->a[3072] = 1;
	v->a[3073] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3074] = actions(55);
	v->a[3075] = 1;
	v->a[3076] = anon_sym_DOLLAR;
	v->a[3077] = actions(57);
	v->a[3078] = 1;
	v->a[3079] = anon_sym_DQUOTE;
	small_parse_table_154(v);
}

void	small_parse_table_154(t_small_parse_table_array *v)
{
	v->a[3080] = actions(61);
	v->a[3081] = 1;
	v->a[3082] = anon_sym_DOLLAR_LBRACE;
	v->a[3083] = actions(63);
	v->a[3084] = 1;
	v->a[3085] = anon_sym_DOLLAR_LPAREN;
	v->a[3086] = actions(65);
	v->a[3087] = 1;
	v->a[3088] = anon_sym_BQUOTE;
	v->a[3089] = actions(67);
	v->a[3090] = 1;
	v->a[3091] = sym_variable_name;
	v->a[3092] = actions(186);
	v->a[3093] = 1;
	v->a[3094] = anon_sym_LF;
	v->a[3095] = state(18);
	v->a[3096] = 1;
	v->a[3097] = aux_sym__case_item_last_repeat2;
	v->a[3098] = state(118);
	v->a[3099] = 1;
	small_parse_table_155(v);
}

/* EOF small_parse_table_30.c */
