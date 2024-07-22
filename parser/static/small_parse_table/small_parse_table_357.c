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
	v->a[35700] = anon_sym_GT;
	v->a[35701] = anon_sym_GT_GT;
	v->a[35702] = anon_sym_LT_AMP;
	v->a[35703] = anon_sym_GT_AMP;
	v->a[35704] = anon_sym_GT_PIPE;
	v->a[35705] = anon_sym_LT_GT;
	v->a[35706] = anon_sym_LT_LT;
	v->a[35707] = anon_sym_LT_LT_DASH;
	v->a[35708] = aux_sym_heredoc_redirect_token1;
	v->a[35709] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35710] = aux_sym_concatenation_token1;
	v->a[35711] = anon_sym_DOLLAR;
	v->a[35712] = anon_sym_DQUOTE;
	v->a[35713] = sym_raw_string;
	v->a[35714] = sym_number;
	v->a[35715] = anon_sym_DOLLAR_LBRACE;
	v->a[35716] = anon_sym_DOLLAR_LPAREN;
	v->a[35717] = anon_sym_BQUOTE;
	v->a[35718] = sym_word;
	v->a[35719] = anon_sym_SEMI;
	small_parse_table_1786(v);
}

void	small_parse_table_1786(t_small_parse_table_array *v)
{
	v->a[35720] = 12;
	v->a[35721] = actions(3);
	v->a[35722] = 1;
	v->a[35723] = sym_comment;
	v->a[35724] = actions(529);
	v->a[35725] = 1;
	v->a[35726] = sym_file_descriptor;
	v->a[35727] = actions(1364);
	v->a[35728] = 1;
	v->a[35729] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35730] = actions(1366);
	v->a[35731] = 1;
	v->a[35732] = anon_sym_DOLLAR;
	v->a[35733] = actions(1368);
	v->a[35734] = 1;
	v->a[35735] = anon_sym_DQUOTE;
	v->a[35736] = actions(1370);
	v->a[35737] = 1;
	v->a[35738] = anon_sym_DOLLAR_LBRACE;
	v->a[35739] = actions(1372);
	small_parse_table_1787(v);
}

void	small_parse_table_1787(t_small_parse_table_array *v)
{
	v->a[35740] = 1;
	v->a[35741] = anon_sym_DOLLAR_LPAREN;
	v->a[35742] = actions(1374);
	v->a[35743] = 1;
	v->a[35744] = anon_sym_BQUOTE;
	v->a[35745] = state(496);
	v->a[35746] = 2;
	v->a[35747] = sym_concatenation;
	v->a[35748] = aux_sym_for_statement_repeat1;
	v->a[35749] = actions(1362);
	v->a[35750] = 3;
	v->a[35751] = sym_raw_string;
	v->a[35752] = sym_number;
	v->a[35753] = sym_word;
	v->a[35754] = state(873);
	v->a[35755] = 5;
	v->a[35756] = sym_arithmetic_expansion;
	v->a[35757] = sym_string;
	v->a[35758] = sym_simple_expansion;
	v->a[35759] = sym_expansion;
	small_parse_table_1788(v);
}

void	small_parse_table_1788(t_small_parse_table_array *v)
{
	v->a[35760] = sym_command_substitution;
	v->a[35761] = actions(531);
	v->a[35762] = 12;
	v->a[35763] = anon_sym_PIPE;
	v->a[35764] = anon_sym_AMP_AMP;
	v->a[35765] = anon_sym_PIPE_PIPE;
	v->a[35766] = anon_sym_LT;
	v->a[35767] = anon_sym_GT;
	v->a[35768] = anon_sym_GT_GT;
	v->a[35769] = anon_sym_LT_AMP;
	v->a[35770] = anon_sym_GT_AMP;
	v->a[35771] = anon_sym_GT_PIPE;
	v->a[35772] = anon_sym_LT_GT;
	v->a[35773] = anon_sym_LT_LT;
	v->a[35774] = anon_sym_LT_LT_DASH;
	v->a[35775] = 6;
	v->a[35776] = actions(3);
	v->a[35777] = 1;
	v->a[35778] = sym_comment;
	v->a[35779] = actions(1110);
	small_parse_table_1789(v);
}

void	small_parse_table_1789(t_small_parse_table_array *v)
{
	v->a[35780] = 1;
	v->a[35781] = sym_file_descriptor;
	v->a[35782] = actions(1378);
	v->a[35783] = 1;
	v->a[35784] = aux_sym_concatenation_token1;
	v->a[35785] = actions(1381);
	v->a[35786] = 1;
	v->a[35787] = sym__concat;
	v->a[35788] = state(503);
	v->a[35789] = 1;
	v->a[35790] = aux_sym_concatenation_repeat1;
	v->a[35791] = actions(1105);
	v->a[35792] = 25;
	v->a[35793] = anon_sym_esac;
	v->a[35794] = anon_sym_PIPE;
	v->a[35795] = anon_sym_SEMI_SEMI;
	v->a[35796] = anon_sym_AMP_AMP;
	v->a[35797] = anon_sym_PIPE_PIPE;
	v->a[35798] = anon_sym_LT;
	v->a[35799] = anon_sym_GT;
	small_parse_table_1790(v);
}

/* EOF small_parse_table_357.c */
