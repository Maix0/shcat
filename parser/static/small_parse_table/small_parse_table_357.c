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
	v->a[35700] = 2;
	v->a[35701] = anon_sym_LT_AMP_DASH;
	v->a[35702] = anon_sym_GT_AMP_DASH;
	v->a[35703] = actions(65);
	v->a[35704] = 3;
	v->a[35705] = sym_raw_string;
	v->a[35706] = sym_number;
	v->a[35707] = sym_word;
	v->a[35708] = state(443);
	v->a[35709] = 5;
	v->a[35710] = sym_arithmetic_expansion;
	v->a[35711] = sym_string;
	v->a[35712] = sym_simple_expansion;
	v->a[35713] = sym_expansion;
	v->a[35714] = sym_command_substitution;
	v->a[35715] = actions(1252);
	v->a[35716] = 6;
	v->a[35717] = anon_sym_LT;
	v->a[35718] = anon_sym_GT;
	v->a[35719] = anon_sym_GT_GT;
	small_parse_table_1786(v);
}

void	small_parse_table_1786(t_small_parse_table_array *v)
{
	v->a[35720] = anon_sym_LT_AMP;
	v->a[35721] = anon_sym_GT_AMP;
	v->a[35722] = anon_sym_GT_PIPE;
	v->a[35723] = 6;
	v->a[35724] = actions(3);
	v->a[35725] = 1;
	v->a[35726] = sym_comment;
	v->a[35727] = actions(1320);
	v->a[35728] = 1;
	v->a[35729] = aux_sym_concatenation_token1;
	v->a[35730] = actions(1323);
	v->a[35731] = 1;
	v->a[35732] = sym__concat;
	v->a[35733] = state(460);
	v->a[35734] = 1;
	v->a[35735] = aux_sym_concatenation_repeat1;
	v->a[35736] = actions(1194);
	v->a[35737] = 2;
	v->a[35738] = sym_file_descriptor;
	v->a[35739] = sym_variable_name;
	small_parse_table_1787(v);
}

void	small_parse_table_1787(t_small_parse_table_array *v)
{
	v->a[35740] = actions(1189);
	v->a[35741] = 27;
	v->a[35742] = anon_sym_esac;
	v->a[35743] = anon_sym_PIPE;
	v->a[35744] = anon_sym_SEMI_SEMI;
	v->a[35745] = anon_sym_AMP_AMP;
	v->a[35746] = anon_sym_PIPE_PIPE;
	v->a[35747] = anon_sym_LT;
	v->a[35748] = anon_sym_GT;
	v->a[35749] = anon_sym_GT_GT;
	v->a[35750] = anon_sym_LT_AMP;
	v->a[35751] = anon_sym_GT_AMP;
	v->a[35752] = anon_sym_GT_PIPE;
	v->a[35753] = anon_sym_LT_AMP_DASH;
	v->a[35754] = anon_sym_GT_AMP_DASH;
	v->a[35755] = anon_sym_LT_LT;
	v->a[35756] = anon_sym_LT_LT_DASH;
	v->a[35757] = aux_sym_heredoc_redirect_token1;
	v->a[35758] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35759] = anon_sym_AMP;
	small_parse_table_1788(v);
}

void	small_parse_table_1788(t_small_parse_table_array *v)
{
	v->a[35760] = anon_sym_DOLLAR;
	v->a[35761] = anon_sym_DQUOTE;
	v->a[35762] = sym_raw_string;
	v->a[35763] = sym_number;
	v->a[35764] = anon_sym_DOLLAR_LBRACE;
	v->a[35765] = anon_sym_DOLLAR_LPAREN;
	v->a[35766] = anon_sym_BQUOTE;
	v->a[35767] = sym_word;
	v->a[35768] = anon_sym_SEMI;
	v->a[35769] = 21;
	v->a[35770] = actions(3);
	v->a[35771] = 1;
	v->a[35772] = sym_comment;
	v->a[35773] = actions(17);
	v->a[35774] = 1;
	v->a[35775] = anon_sym_LPAREN;
	v->a[35776] = actions(59);
	v->a[35777] = 1;
	v->a[35778] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35779] = actions(61);
	small_parse_table_1789(v);
}

void	small_parse_table_1789(t_small_parse_table_array *v)
{
	v->a[35780] = 1;
	v->a[35781] = anon_sym_DOLLAR;
	v->a[35782] = actions(63);
	v->a[35783] = 1;
	v->a[35784] = anon_sym_DQUOTE;
	v->a[35785] = actions(67);
	v->a[35786] = 1;
	v->a[35787] = anon_sym_DOLLAR_LBRACE;
	v->a[35788] = actions(69);
	v->a[35789] = 1;
	v->a[35790] = anon_sym_DOLLAR_LPAREN;
	v->a[35791] = actions(71);
	v->a[35792] = 1;
	v->a[35793] = anon_sym_BQUOTE;
	v->a[35794] = actions(232);
	v->a[35795] = 1;
	v->a[35796] = sym_variable_name;
	v->a[35797] = actions(1256);
	v->a[35798] = 1;
	v->a[35799] = sym_file_descriptor;
	small_parse_table_1790(v);
}

/* EOF small_parse_table_357.c */
