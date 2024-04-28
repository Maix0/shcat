/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1847.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9235(t_small_parse_table_array *v)
{
	v->a[184700] = 1;
	v->a[184701] = anon_sym_DOLLAR_BQUOTE;
	v->a[184702] = state(6426);
	v->a[184703] = 1;
	v->a[184704] = aux_sym__literal_repeat1;
	v->a[184705] = state(7503);
	v->a[184706] = 1;
	v->a[184707] = sym_last_case_item;
	v->a[184708] = actions(7224);
	v->a[184709] = 2;
	v->a[184710] = anon_sym_LPAREN_LPAREN;
	v->a[184711] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[184712] = actions(7232);
	v->a[184713] = 2;
	v->a[184714] = sym_raw_string;
	v->a[184715] = sym_ansi_c_string;
	v->a[184716] = actions(7240);
	v->a[184717] = 2;
	v->a[184718] = anon_sym_LT_LPAREN;
	v->a[184719] = anon_sym_GT_LPAREN;
	small_parse_table_9236(v);
}

void	small_parse_table_9236(t_small_parse_table_array *v)
{
	v->a[184720] = state(3477);
	v->a[184721] = 2;
	v->a[184722] = sym_case_item;
	v->a[184723] = aux_sym_case_statement_repeat1;
	v->a[184724] = state(6695);
	v->a[184725] = 2;
	v->a[184726] = sym_concatenation;
	v->a[184727] = sym__extglob_blob;
	v->a[184728] = state(6303);
	v->a[184729] = 9;
	v->a[184730] = sym_arithmetic_expansion;
	v->a[184731] = sym_brace_expression;
	v->a[184732] = sym_string;
	v->a[184733] = sym_translated_string;
	v->a[184734] = sym_number;
	v->a[184735] = sym_simple_expansion;
	v->a[184736] = sym_expansion;
	v->a[184737] = sym_command_substitution;
	v->a[184738] = sym_process_substitution;
	v->a[184739] = 24;
	small_parse_table_9237(v);
}

void	small_parse_table_9237(t_small_parse_table_array *v)
{
	v->a[184740] = actions(71);
	v->a[184741] = 1;
	v->a[184742] = sym_comment;
	v->a[184743] = actions(6474);
	v->a[184744] = 1;
	v->a[184745] = sym_word;
	v->a[184746] = actions(6480);
	v->a[184747] = 1;
	v->a[184748] = anon_sym_LPAREN;
	v->a[184749] = actions(6488);
	v->a[184750] = 1;
	v->a[184751] = anon_sym_DOLLAR;
	v->a[184752] = actions(6494);
	v->a[184753] = 1;
	v->a[184754] = aux_sym_number_token1;
	v->a[184755] = actions(6496);
	v->a[184756] = 1;
	v->a[184757] = aux_sym_number_token2;
	v->a[184758] = actions(6500);
	v->a[184759] = 1;
	small_parse_table_9238(v);
}

void	small_parse_table_9238(t_small_parse_table_array *v)
{
	v->a[184760] = anon_sym_DOLLAR_LPAREN;
	v->a[184761] = actions(6508);
	v->a[184762] = 1;
	v->a[184763] = sym_test_operator;
	v->a[184764] = actions(6510);
	v->a[184765] = 1;
	v->a[184766] = sym_extglob_pattern;
	v->a[184767] = actions(6512);
	v->a[184768] = 1;
	v->a[184769] = sym__brace_start;
	v->a[184770] = actions(7226);
	v->a[184771] = 1;
	v->a[184772] = anon_sym_DOLLAR_LBRACK;
	v->a[184773] = actions(7228);
	v->a[184774] = 1;
	v->a[184775] = sym__special_character;
	v->a[184776] = actions(7230);
	v->a[184777] = 1;
	v->a[184778] = anon_sym_DQUOTE;
	v->a[184779] = actions(7234);
	small_parse_table_9239(v);
}

void	small_parse_table_9239(t_small_parse_table_array *v)
{
	v->a[184780] = 1;
	v->a[184781] = anon_sym_DOLLAR_LBRACE;
	v->a[184782] = actions(7236);
	v->a[184783] = 1;
	v->a[184784] = anon_sym_BQUOTE;
	v->a[184785] = actions(7238);
	v->a[184786] = 1;
	v->a[184787] = anon_sym_DOLLAR_BQUOTE;
	v->a[184788] = state(6426);
	v->a[184789] = 1;
	v->a[184790] = aux_sym__literal_repeat1;
	v->a[184791] = state(7504);
	v->a[184792] = 1;
	v->a[184793] = sym_last_case_item;
	v->a[184794] = actions(7224);
	v->a[184795] = 2;
	v->a[184796] = anon_sym_LPAREN_LPAREN;
	v->a[184797] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[184798] = actions(7232);
	v->a[184799] = 2;
	small_parse_table_9240(v);
}

/* EOF small_parse_table_1847.c */
