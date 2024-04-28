/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1267.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6335(t_small_parse_table_array *v)
{
	v->a[126700] = state(6426);
	v->a[126701] = 1;
	v->a[126702] = aux_sym__literal_repeat1;
	v->a[126703] = state(7440);
	v->a[126704] = 1;
	v->a[126705] = sym_last_case_item;
	v->a[126706] = actions(6476);
	v->a[126707] = 2;
	v->a[126708] = anon_sym_LPAREN_LPAREN;
	v->a[126709] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[126710] = actions(6506);
	v->a[126711] = 2;
	v->a[126712] = anon_sym_LT_LPAREN;
	v->a[126713] = anon_sym_GT_LPAREN;
	v->a[126714] = state(3419);
	v->a[126715] = 2;
	v->a[126716] = sym_case_item;
	v->a[126717] = aux_sym_case_statement_repeat1;
	v->a[126718] = state(6695);
	v->a[126719] = 2;
	small_parse_table_6336(v);
}

void	small_parse_table_6336(t_small_parse_table_array *v)
{
	v->a[126720] = sym_concatenation;
	v->a[126721] = sym__extglob_blob;
	v->a[126722] = actions(6474);
	v->a[126723] = 3;
	v->a[126724] = sym_raw_string;
	v->a[126725] = sym_ansi_c_string;
	v->a[126726] = sym_word;
	v->a[126727] = actions(6614);
	v->a[126728] = 3;
	v->a[126729] = anon_sym_SEMI;
	v->a[126730] = anon_sym_AMP;
	v->a[126731] = anon_sym_SEMI_SEMI;
	v->a[126732] = state(6303);
	v->a[126733] = 9;
	v->a[126734] = sym_arithmetic_expansion;
	v->a[126735] = sym_brace_expression;
	v->a[126736] = sym_string;
	v->a[126737] = sym_translated_string;
	v->a[126738] = sym_number;
	v->a[126739] = sym_simple_expansion;
	small_parse_table_6337(v);
}

void	small_parse_table_6337(t_small_parse_table_array *v)
{
	v->a[126740] = sym_expansion;
	v->a[126741] = sym_command_substitution;
	v->a[126742] = sym_process_substitution;
	v->a[126743] = 3;
	v->a[126744] = actions(71);
	v->a[126745] = 1;
	v->a[126746] = sym_comment;
	v->a[126747] = actions(1348);
	v->a[126748] = 14;
	v->a[126749] = anon_sym_PIPE;
	v->a[126750] = anon_sym_LT;
	v->a[126751] = anon_sym_GT;
	v->a[126752] = anon_sym_LT_LT;
	v->a[126753] = anon_sym_AMP_GT;
	v->a[126754] = anon_sym_LT_AMP;
	v->a[126755] = anon_sym_GT_AMP;
	v->a[126756] = anon_sym_DOLLAR;
	v->a[126757] = sym__special_character;
	v->a[126758] = aux_sym_number_token1;
	v->a[126759] = aux_sym_number_token2;
	small_parse_table_6338(v);
}

void	small_parse_table_6338(t_small_parse_table_array *v)
{
	v->a[126760] = anon_sym_DOLLAR_LPAREN;
	v->a[126761] = anon_sym_BQUOTE;
	v->a[126762] = sym_word;
	v->a[126763] = actions(1350);
	v->a[126764] = 27;
	v->a[126765] = sym_file_descriptor;
	v->a[126766] = sym__concat;
	v->a[126767] = sym_variable_name;
	v->a[126768] = sym_test_operator;
	v->a[126769] = sym__brace_start;
	v->a[126770] = anon_sym_LPAREN_LPAREN;
	v->a[126771] = anon_sym_PIPE_PIPE;
	v->a[126772] = anon_sym_AMP_AMP;
	v->a[126773] = anon_sym_GT_GT;
	v->a[126774] = anon_sym_PIPE_AMP;
	v->a[126775] = anon_sym_RBRACK;
	v->a[126776] = anon_sym_AMP_GT_GT;
	v->a[126777] = anon_sym_GT_PIPE;
	v->a[126778] = anon_sym_LT_AMP_DASH;
	v->a[126779] = anon_sym_GT_AMP_DASH;
	small_parse_table_6339(v);
}

void	small_parse_table_6339(t_small_parse_table_array *v)
{
	v->a[126780] = anon_sym_LT_LT_DASH;
	v->a[126781] = anon_sym_LT_LT_LT;
	v->a[126782] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[126783] = anon_sym_DOLLAR_LBRACK;
	v->a[126784] = aux_sym_concatenation_token1;
	v->a[126785] = anon_sym_DQUOTE;
	v->a[126786] = sym_raw_string;
	v->a[126787] = sym_ansi_c_string;
	v->a[126788] = anon_sym_DOLLAR_LBRACE;
	v->a[126789] = anon_sym_DOLLAR_BQUOTE;
	v->a[126790] = anon_sym_LT_LPAREN;
	v->a[126791] = anon_sym_GT_LPAREN;
	v->a[126792] = 5;
	v->a[126793] = actions(71);
	v->a[126794] = 1;
	v->a[126795] = sym_comment;
	v->a[126796] = state(2350);
	v->a[126797] = 1;
	v->a[126798] = aux_sym_concatenation_repeat1;
	v->a[126799] = actions(6514);
	small_parse_table_6340(v);
}

/* EOF small_parse_table_1267.c */
