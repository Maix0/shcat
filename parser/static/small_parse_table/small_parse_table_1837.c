/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1837.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9185(t_small_parse_table_array *v)
{
	v->a[183700] = anon_sym_RPAREN;
	v->a[183701] = 24;
	v->a[183702] = actions(71);
	v->a[183703] = 1;
	v->a[183704] = sym_comment;
	v->a[183705] = actions(6474);
	v->a[183706] = 1;
	v->a[183707] = sym_word;
	v->a[183708] = actions(6480);
	v->a[183709] = 1;
	v->a[183710] = anon_sym_LPAREN;
	v->a[183711] = actions(6488);
	v->a[183712] = 1;
	v->a[183713] = anon_sym_DOLLAR;
	v->a[183714] = actions(6494);
	v->a[183715] = 1;
	v->a[183716] = aux_sym_number_token1;
	v->a[183717] = actions(6496);
	v->a[183718] = 1;
	v->a[183719] = aux_sym_number_token2;
	small_parse_table_9186(v);
}

void	small_parse_table_9186(t_small_parse_table_array *v)
{
	v->a[183720] = actions(6500);
	v->a[183721] = 1;
	v->a[183722] = anon_sym_DOLLAR_LPAREN;
	v->a[183723] = actions(6508);
	v->a[183724] = 1;
	v->a[183725] = sym_test_operator;
	v->a[183726] = actions(6510);
	v->a[183727] = 1;
	v->a[183728] = sym_extglob_pattern;
	v->a[183729] = actions(6512);
	v->a[183730] = 1;
	v->a[183731] = sym__brace_start;
	v->a[183732] = actions(7226);
	v->a[183733] = 1;
	v->a[183734] = anon_sym_DOLLAR_LBRACK;
	v->a[183735] = actions(7228);
	v->a[183736] = 1;
	v->a[183737] = sym__special_character;
	v->a[183738] = actions(7230);
	v->a[183739] = 1;
	small_parse_table_9187(v);
}

void	small_parse_table_9187(t_small_parse_table_array *v)
{
	v->a[183740] = anon_sym_DQUOTE;
	v->a[183741] = actions(7234);
	v->a[183742] = 1;
	v->a[183743] = anon_sym_DOLLAR_LBRACE;
	v->a[183744] = actions(7236);
	v->a[183745] = 1;
	v->a[183746] = anon_sym_BQUOTE;
	v->a[183747] = actions(7238);
	v->a[183748] = 1;
	v->a[183749] = anon_sym_DOLLAR_BQUOTE;
	v->a[183750] = state(6426);
	v->a[183751] = 1;
	v->a[183752] = aux_sym__literal_repeat1;
	v->a[183753] = state(6898);
	v->a[183754] = 1;
	v->a[183755] = sym_last_case_item;
	v->a[183756] = actions(7224);
	v->a[183757] = 2;
	v->a[183758] = anon_sym_LPAREN_LPAREN;
	v->a[183759] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_9188(v);
}

void	small_parse_table_9188(t_small_parse_table_array *v)
{
	v->a[183760] = actions(7232);
	v->a[183761] = 2;
	v->a[183762] = sym_raw_string;
	v->a[183763] = sym_ansi_c_string;
	v->a[183764] = actions(7240);
	v->a[183765] = 2;
	v->a[183766] = anon_sym_LT_LPAREN;
	v->a[183767] = anon_sym_GT_LPAREN;
	v->a[183768] = state(3477);
	v->a[183769] = 2;
	v->a[183770] = sym_case_item;
	v->a[183771] = aux_sym_case_statement_repeat1;
	v->a[183772] = state(6695);
	v->a[183773] = 2;
	v->a[183774] = sym_concatenation;
	v->a[183775] = sym__extglob_blob;
	v->a[183776] = state(6303);
	v->a[183777] = 9;
	v->a[183778] = sym_arithmetic_expansion;
	v->a[183779] = sym_brace_expression;
	small_parse_table_9189(v);
}

void	small_parse_table_9189(t_small_parse_table_array *v)
{
	v->a[183780] = sym_string;
	v->a[183781] = sym_translated_string;
	v->a[183782] = sym_number;
	v->a[183783] = sym_simple_expansion;
	v->a[183784] = sym_expansion;
	v->a[183785] = sym_command_substitution;
	v->a[183786] = sym_process_substitution;
	v->a[183787] = 19;
	v->a[183788] = actions(71);
	v->a[183789] = 1;
	v->a[183790] = sym_comment;
	v->a[183791] = actions(7617);
	v->a[183792] = 1;
	v->a[183793] = anon_sym_PIPE_PIPE;
	v->a[183794] = actions(7619);
	v->a[183795] = 1;
	v->a[183796] = anon_sym_AMP_AMP;
	v->a[183797] = actions(7621);
	v->a[183798] = 1;
	v->a[183799] = anon_sym_PIPE;
	small_parse_table_9190(v);
}

/* EOF small_parse_table_1837.c */
