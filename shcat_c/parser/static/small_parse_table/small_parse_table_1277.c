/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1277.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6385(t_small_parse_table_array *v)
{
	v->a[127700] = sym_test_operator;
	v->a[127701] = actions(6510);
	v->a[127702] = 1;
	v->a[127703] = sym_extglob_pattern;
	v->a[127704] = actions(6512);
	v->a[127705] = 1;
	v->a[127706] = sym__brace_start;
	v->a[127707] = actions(6641);
	v->a[127708] = 1;
	v->a[127709] = anon_sym_esac;
	v->a[127710] = actions(6643);
	v->a[127711] = 1;
	v->a[127712] = aux_sym_heredoc_redirect_token1;
	v->a[127713] = state(6426);
	v->a[127714] = 1;
	v->a[127715] = aux_sym__literal_repeat1;
	v->a[127716] = state(7528);
	v->a[127717] = 1;
	v->a[127718] = sym_last_case_item;
	v->a[127719] = actions(6476);
	small_parse_table_6386(v);
}

void	small_parse_table_6386(t_small_parse_table_array *v)
{
	v->a[127720] = 2;
	v->a[127721] = anon_sym_LPAREN_LPAREN;
	v->a[127722] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[127723] = actions(6506);
	v->a[127724] = 2;
	v->a[127725] = anon_sym_LT_LPAREN;
	v->a[127726] = anon_sym_GT_LPAREN;
	v->a[127727] = state(3310);
	v->a[127728] = 2;
	v->a[127729] = sym_case_item;
	v->a[127730] = aux_sym_case_statement_repeat1;
	v->a[127731] = state(6695);
	v->a[127732] = 2;
	v->a[127733] = sym_concatenation;
	v->a[127734] = sym__extglob_blob;
	v->a[127735] = actions(6474);
	v->a[127736] = 3;
	v->a[127737] = sym_raw_string;
	v->a[127738] = sym_ansi_c_string;
	v->a[127739] = sym_word;
	small_parse_table_6387(v);
}

void	small_parse_table_6387(t_small_parse_table_array *v)
{
	v->a[127740] = actions(6639);
	v->a[127741] = 3;
	v->a[127742] = anon_sym_SEMI;
	v->a[127743] = anon_sym_AMP;
	v->a[127744] = anon_sym_SEMI_SEMI;
	v->a[127745] = state(6303);
	v->a[127746] = 9;
	v->a[127747] = sym_arithmetic_expansion;
	v->a[127748] = sym_brace_expression;
	v->a[127749] = sym_string;
	v->a[127750] = sym_translated_string;
	v->a[127751] = sym_number;
	v->a[127752] = sym_simple_expansion;
	v->a[127753] = sym_expansion;
	v->a[127754] = sym_command_substitution;
	v->a[127755] = sym_process_substitution;
	v->a[127756] = 6;
	v->a[127757] = actions(71);
	v->a[127758] = 1;
	v->a[127759] = sym_comment;
	small_parse_table_6388(v);
}

void	small_parse_table_6388(t_small_parse_table_array *v)
{
	v->a[127760] = actions(6514);
	v->a[127761] = 1;
	v->a[127762] = aux_sym_concatenation_token1;
	v->a[127763] = actions(6645);
	v->a[127764] = 1;
	v->a[127765] = sym__concat;
	v->a[127766] = state(2359);
	v->a[127767] = 1;
	v->a[127768] = aux_sym_concatenation_repeat1;
	v->a[127769] = actions(1265);
	v->a[127770] = 13;
	v->a[127771] = anon_sym_PIPE;
	v->a[127772] = anon_sym_LT;
	v->a[127773] = anon_sym_GT;
	v->a[127774] = anon_sym_LT_LT;
	v->a[127775] = anon_sym_AMP_GT;
	v->a[127776] = anon_sym_LT_AMP;
	v->a[127777] = anon_sym_GT_AMP;
	v->a[127778] = anon_sym_DOLLAR;
	v->a[127779] = aux_sym_number_token1;
	small_parse_table_6389(v);
}

void	small_parse_table_6389(t_small_parse_table_array *v)
{
	v->a[127780] = aux_sym_number_token2;
	v->a[127781] = anon_sym_DOLLAR_LPAREN;
	v->a[127782] = anon_sym_BQUOTE;
	v->a[127783] = sym_word;
	v->a[127784] = actions(1267);
	v->a[127785] = 25;
	v->a[127786] = sym_file_descriptor;
	v->a[127787] = sym_variable_name;
	v->a[127788] = sym_test_operator;
	v->a[127789] = sym__brace_start;
	v->a[127790] = anon_sym_LPAREN_LPAREN;
	v->a[127791] = anon_sym_PIPE_PIPE;
	v->a[127792] = anon_sym_AMP_AMP;
	v->a[127793] = anon_sym_GT_GT;
	v->a[127794] = anon_sym_PIPE_AMP;
	v->a[127795] = anon_sym_AMP_GT_GT;
	v->a[127796] = anon_sym_GT_PIPE;
	v->a[127797] = anon_sym_LT_AMP_DASH;
	v->a[127798] = anon_sym_GT_AMP_DASH;
	v->a[127799] = anon_sym_LT_LT_DASH;
	small_parse_table_6390(v);
}

/* EOF small_parse_table_1277.c */
