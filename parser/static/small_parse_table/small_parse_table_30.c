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
	v->a[3000] = state(425);
	v->a[3001] = 5;
	v->a[3002] = sym_arithmetic_expansion;
	v->a[3003] = sym_string;
	v->a[3004] = sym_simple_expansion;
	v->a[3005] = sym_expansion;
	v->a[3006] = sym_command_substitution;
	v->a[3007] = actions(51);
	v->a[3008] = 7;
	v->a[3009] = anon_sym_LT;
	v->a[3010] = anon_sym_GT;
	v->a[3011] = anon_sym_GT_GT;
	v->a[3012] = anon_sym_LT_AMP;
	v->a[3013] = anon_sym_GT_AMP;
	v->a[3014] = anon_sym_GT_PIPE;
	v->a[3015] = anon_sym_LT_GT;
	v->a[3016] = state(936);
	v->a[3017] = 12;
	v->a[3018] = sym_redirected_statement;
	v->a[3019] = sym_for_statement;
	small_parse_table_151(v);
}

void	small_parse_table_151(t_small_parse_table_array *v)
{
	v->a[3020] = sym_while_statement;
	v->a[3021] = sym_if_statement;
	v->a[3022] = sym_case_statement;
	v->a[3023] = sym_function_definition;
	v->a[3024] = sym_compound_statement;
	v->a[3025] = sym_subshell;
	v->a[3026] = sym_list;
	v->a[3027] = sym_negated_command;
	v->a[3028] = sym_command;
	v->a[3029] = sym__variable_assignments;
	v->a[3030] = 32;
	v->a[3031] = actions(3);
	v->a[3032] = 1;
	v->a[3033] = sym_comment;
	v->a[3034] = actions(9);
	v->a[3035] = 1;
	v->a[3036] = anon_sym_for;
	v->a[3037] = actions(13);
	v->a[3038] = 1;
	v->a[3039] = anon_sym_if;
	small_parse_table_152(v);
}

void	small_parse_table_152(t_small_parse_table_array *v)
{
	v->a[3040] = actions(15);
	v->a[3041] = 1;
	v->a[3042] = anon_sym_case;
	v->a[3043] = actions(17);
	v->a[3044] = 1;
	v->a[3045] = anon_sym_LPAREN;
	v->a[3046] = actions(19);
	v->a[3047] = 1;
	v->a[3048] = anon_sym_LBRACE;
	v->a[3049] = actions(41);
	v->a[3050] = 1;
	v->a[3051] = sym_word;
	v->a[3052] = actions(49);
	v->a[3053] = 1;
	v->a[3054] = anon_sym_BANG;
	v->a[3055] = actions(53);
	v->a[3056] = 1;
	v->a[3057] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3058] = actions(55);
	v->a[3059] = 1;
	small_parse_table_153(v);
}

void	small_parse_table_153(t_small_parse_table_array *v)
{
	v->a[3060] = anon_sym_DOLLAR;
	v->a[3061] = actions(57);
	v->a[3062] = 1;
	v->a[3063] = anon_sym_DQUOTE;
	v->a[3064] = actions(61);
	v->a[3065] = 1;
	v->a[3066] = anon_sym_DOLLAR_LBRACE;
	v->a[3067] = actions(63);
	v->a[3068] = 1;
	v->a[3069] = anon_sym_DOLLAR_LPAREN;
	v->a[3070] = actions(65);
	v->a[3071] = 1;
	v->a[3072] = anon_sym_BQUOTE;
	v->a[3073] = actions(67);
	v->a[3074] = 1;
	v->a[3075] = sym_variable_name;
	v->a[3076] = actions(188);
	v->a[3077] = 1;
	v->a[3078] = anon_sym_LF;
	v->a[3079] = state(29);
	small_parse_table_154(v);
}

void	small_parse_table_154(t_small_parse_table_array *v)
{
	v->a[3080] = 1;
	v->a[3081] = aux_sym__case_item_last_repeat2;
	v->a[3082] = state(117);
	v->a[3083] = 1;
	v->a[3084] = aux_sym__statements_repeat1;
	v->a[3085] = state(271);
	v->a[3086] = 1;
	v->a[3087] = sym_command_name;
	v->a[3088] = state(288);
	v->a[3089] = 1;
	v->a[3090] = sym_variable_assignment;
	v->a[3091] = state(482);
	v->a[3092] = 1;
	v->a[3093] = aux_sym_command_repeat1;
	v->a[3094] = state(600);
	v->a[3095] = 1;
	v->a[3096] = sym_file_redirect;
	v->a[3097] = state(602);
	v->a[3098] = 1;
	v->a[3099] = sym_concatenation;
	small_parse_table_155(v);
}

/* EOF small_parse_table_30.c */
