/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1910.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9550(t_small_parse_table_array *v)
{
	v->a[191000] = 2;
	v->a[191001] = sym_concatenation;
	v->a[191002] = sym_array;
	v->a[191003] = state(1512);
	v->a[191004] = 9;
	v->a[191005] = sym_arithmetic_expansion;
	v->a[191006] = sym_brace_expression;
	v->a[191007] = sym_string;
	v->a[191008] = sym_translated_string;
	v->a[191009] = sym_number;
	v->a[191010] = sym_simple_expansion;
	v->a[191011] = sym_expansion;
	v->a[191012] = sym_command_substitution;
	v->a[191013] = sym_process_substitution;
	v->a[191014] = 3;
	v->a[191015] = actions(71);
	v->a[191016] = 1;
	v->a[191017] = sym_comment;
	v->a[191018] = actions(1348);
	v->a[191019] = 11;
	small_parse_table_9551(v);
}

void	small_parse_table_9551(t_small_parse_table_array *v)
{
	v->a[191020] = anon_sym_LT;
	v->a[191021] = anon_sym_GT;
	v->a[191022] = anon_sym_AMP_GT;
	v->a[191023] = anon_sym_LT_AMP;
	v->a[191024] = anon_sym_GT_AMP;
	v->a[191025] = anon_sym_DOLLAR;
	v->a[191026] = aux_sym_number_token1;
	v->a[191027] = aux_sym_number_token2;
	v->a[191028] = anon_sym_DOLLAR_LPAREN;
	v->a[191029] = anon_sym_BQUOTE;
	v->a[191030] = sym_word;
	v->a[191031] = actions(1350);
	v->a[191032] = 23;
	v->a[191033] = sym_file_descriptor;
	v->a[191034] = sym__concat;
	v->a[191035] = sym_variable_name;
	v->a[191036] = sym_test_operator;
	v->a[191037] = sym__brace_start;
	v->a[191038] = anon_sym_LPAREN_LPAREN;
	v->a[191039] = anon_sym_GT_GT;
	small_parse_table_9552(v);
}

void	small_parse_table_9552(t_small_parse_table_array *v)
{
	v->a[191040] = anon_sym_AMP_GT_GT;
	v->a[191041] = anon_sym_GT_PIPE;
	v->a[191042] = anon_sym_LT_AMP_DASH;
	v->a[191043] = anon_sym_GT_AMP_DASH;
	v->a[191044] = anon_sym_LT_LT_LT;
	v->a[191045] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[191046] = anon_sym_DOLLAR_LBRACK;
	v->a[191047] = aux_sym_concatenation_token1;
	v->a[191048] = sym__special_character;
	v->a[191049] = anon_sym_DQUOTE;
	v->a[191050] = sym_raw_string;
	v->a[191051] = sym_ansi_c_string;
	v->a[191052] = anon_sym_DOLLAR_LBRACE;
	v->a[191053] = anon_sym_DOLLAR_BQUOTE;
	v->a[191054] = anon_sym_LT_LPAREN;
	v->a[191055] = anon_sym_GT_LPAREN;
	v->a[191056] = 23;
	v->a[191057] = actions(3);
	v->a[191058] = 1;
	v->a[191059] = sym_comment;
	small_parse_table_9553(v);
}

void	small_parse_table_9553(t_small_parse_table_array *v)
{
	v->a[191060] = actions(4151);
	v->a[191061] = 1;
	v->a[191062] = anon_sym_DOLLAR_LBRACK;
	v->a[191063] = actions(4153);
	v->a[191064] = 1;
	v->a[191065] = anon_sym_DOLLAR;
	v->a[191066] = actions(4155);
	v->a[191067] = 1;
	v->a[191068] = sym__special_character;
	v->a[191069] = actions(4157);
	v->a[191070] = 1;
	v->a[191071] = anon_sym_DQUOTE;
	v->a[191072] = actions(4161);
	v->a[191073] = 1;
	v->a[191074] = aux_sym_number_token1;
	v->a[191075] = actions(4163);
	v->a[191076] = 1;
	v->a[191077] = aux_sym_number_token2;
	v->a[191078] = actions(4165);
	v->a[191079] = 1;
	small_parse_table_9554(v);
}

void	small_parse_table_9554(t_small_parse_table_array *v)
{
	v->a[191080] = anon_sym_DOLLAR_LBRACE;
	v->a[191081] = actions(4167);
	v->a[191082] = 1;
	v->a[191083] = anon_sym_DOLLAR_LPAREN;
	v->a[191084] = actions(4169);
	v->a[191085] = 1;
	v->a[191086] = anon_sym_BQUOTE;
	v->a[191087] = actions(4171);
	v->a[191088] = 1;
	v->a[191089] = anon_sym_DOLLAR_BQUOTE;
	v->a[191090] = actions(4181);
	v->a[191091] = 1;
	v->a[191092] = sym__brace_start;
	v->a[191093] = actions(8456);
	v->a[191094] = 1;
	v->a[191095] = sym_word;
	v->a[191096] = actions(8458);
	v->a[191097] = 1;
	v->a[191098] = anon_sym_LPAREN;
	v->a[191099] = actions(8462);
	small_parse_table_9555(v);
}

/* EOF small_parse_table_1910.c */
