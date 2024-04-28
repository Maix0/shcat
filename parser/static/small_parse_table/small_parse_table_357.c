/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_357.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1785(t_small_parse_table_array *v)
{
	v->a[35700] = 1;
	v->a[35701] = sym_comment;
	v->a[35702] = actions(4257);
	v->a[35703] = 1;
	v->a[35704] = anon_sym_RPAREN;
	v->a[35705] = actions(4411);
	v->a[35706] = 1;
	v->a[35707] = aux_sym_heredoc_redirect_token1;
	v->a[35708] = actions(4811);
	v->a[35709] = 1;
	v->a[35710] = sym_variable_name;
	v->a[35711] = state(6786);
	v->a[35712] = 1;
	v->a[35713] = sym_subscript;
	v->a[35714] = actions(4253);
	v->a[35715] = 2;
	v->a[35716] = anon_sym_PIPE;
	v->a[35717] = anon_sym_PIPE_AMP;
	v->a[35718] = actions(4692);
	v->a[35719] = 2;
	small_parse_table_1786(v);
}

void	small_parse_table_1786(t_small_parse_table_array *v)
{
	v->a[35720] = anon_sym_LT_LT;
	v->a[35721] = anon_sym_LT_LT_DASH;
	v->a[35722] = actions(4809);
	v->a[35723] = 2;
	v->a[35724] = anon_sym_PIPE_PIPE;
	v->a[35725] = anon_sym_AMP_AMP;
	v->a[35726] = state(4534);
	v->a[35727] = 2;
	v->a[35728] = sym_variable_assignment;
	v->a[35729] = aux_sym_variable_assignments_repeat1;
	v->a[35730] = actions(4261);
	v->a[35731] = 3;
	v->a[35732] = sym_file_descriptor;
	v->a[35733] = sym_test_operator;
	v->a[35734] = sym__brace_start;
	v->a[35735] = actions(4409);
	v->a[35736] = 3;
	v->a[35737] = anon_sym_SEMI;
	v->a[35738] = anon_sym_AMP;
	v->a[35739] = anon_sym_SEMI_SEMI;
	small_parse_table_1787(v);
}

void	small_parse_table_1787(t_small_parse_table_array *v)
{
	v->a[35740] = state(4746);
	v->a[35741] = 3;
	v->a[35742] = sym_file_redirect;
	v->a[35743] = sym_heredoc_redirect;
	v->a[35744] = aux_sym_redirected_statement_repeat1;
	v->a[35745] = actions(4247);
	v->a[35746] = 28;
	v->a[35747] = anon_sym_LPAREN_LPAREN;
	v->a[35748] = anon_sym_LT;
	v->a[35749] = anon_sym_GT;
	v->a[35750] = anon_sym_GT_GT;
	v->a[35751] = anon_sym_AMP_GT;
	v->a[35752] = anon_sym_AMP_GT_GT;
	v->a[35753] = anon_sym_LT_AMP;
	v->a[35754] = anon_sym_GT_AMP;
	v->a[35755] = anon_sym_GT_PIPE;
	v->a[35756] = anon_sym_LT_AMP_DASH;
	v->a[35757] = anon_sym_GT_AMP_DASH;
	v->a[35758] = anon_sym_LT_LT_LT;
	v->a[35759] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1788(v);
}

void	small_parse_table_1788(t_small_parse_table_array *v)
{
	v->a[35760] = anon_sym_DOLLAR_LBRACK;
	v->a[35761] = anon_sym_DOLLAR;
	v->a[35762] = sym__special_character;
	v->a[35763] = anon_sym_DQUOTE;
	v->a[35764] = sym_raw_string;
	v->a[35765] = sym_ansi_c_string;
	v->a[35766] = aux_sym_number_token1;
	v->a[35767] = aux_sym_number_token2;
	v->a[35768] = anon_sym_DOLLAR_LBRACE;
	v->a[35769] = anon_sym_DOLLAR_LPAREN;
	v->a[35770] = anon_sym_BQUOTE;
	v->a[35771] = anon_sym_DOLLAR_BQUOTE;
	v->a[35772] = anon_sym_LT_LPAREN;
	v->a[35773] = anon_sym_GT_LPAREN;
	v->a[35774] = sym_word;
	v->a[35775] = 8;
	v->a[35776] = actions(3);
	v->a[35777] = 1;
	v->a[35778] = sym_comment;
	v->a[35779] = actions(4797);
	small_parse_table_1789(v);
}

void	small_parse_table_1789(t_small_parse_table_array *v)
{
	v->a[35780] = 1;
	v->a[35781] = anon_sym_DQUOTE;
	v->a[35782] = actions(4801);
	v->a[35783] = 1;
	v->a[35784] = sym_variable_name;
	v->a[35785] = state(2585);
	v->a[35786] = 1;
	v->a[35787] = sym_string;
	v->a[35788] = actions(4799);
	v->a[35789] = 2;
	v->a[35790] = aux_sym__simple_variable_name_token1;
	v->a[35791] = aux_sym__multiline_variable_name_token1;
	v->a[35792] = actions(1241);
	v->a[35793] = 3;
	v->a[35794] = sym_file_descriptor;
	v->a[35795] = sym_test_operator;
	v->a[35796] = sym__brace_start;
	v->a[35797] = actions(4795);
	v->a[35798] = 9;
	v->a[35799] = anon_sym_DASH;
	small_parse_table_1790(v);
}

/* EOF small_parse_table_357.c */
