/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_567.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2835(t_small_parse_table_array *v)
{
	v->a[56700] = sym_comment;
	v->a[56701] = actions(2928);
	v->a[56702] = 1;
	v->a[56703] = anon_sym_fi;
	v->a[56704] = actions(2930);
	v->a[56705] = 1;
	v->a[56706] = anon_sym_elif;
	v->a[56707] = actions(2932);
	v->a[56708] = 1;
	v->a[56709] = anon_sym_else;
	v->a[56710] = state(1699);
	v->a[56711] = 1;
	v->a[56712] = sym_else_clause;
	v->a[56713] = state(1503);
	v->a[56714] = 2;
	v->a[56715] = sym_elif_clause;
	v->a[56716] = aux_sym_if_statement_repeat1;
	v->a[56717] = 3;
	v->a[56718] = actions(3);
	v->a[56719] = 1;
	small_parse_table_2836(v);
}

void	small_parse_table_2836(t_small_parse_table_array *v)
{
	v->a[56720] = sym_comment;
	v->a[56721] = actions(2936);
	v->a[56722] = 2;
	v->a[56723] = sym_regex;
	v->a[56724] = aux_sym__expansion_regex_token1;
	v->a[56725] = actions(2934);
	v->a[56726] = 4;
	v->a[56727] = anon_sym_RPAREN;
	v->a[56728] = anon_sym_RBRACE;
	v->a[56729] = anon_sym_DQUOTE;
	v->a[56730] = sym_raw_string;
	v->a[56731] = 6;
	v->a[56732] = actions(1436);
	v->a[56733] = 1;
	v->a[56734] = sym_comment;
	v->a[56735] = actions(2930);
	v->a[56736] = 1;
	v->a[56737] = anon_sym_elif;
	v->a[56738] = actions(2932);
	v->a[56739] = 1;
	small_parse_table_2837(v);
}

void	small_parse_table_2837(t_small_parse_table_array *v)
{
	v->a[56740] = anon_sym_else;
	v->a[56741] = actions(2938);
	v->a[56742] = 1;
	v->a[56743] = anon_sym_fi;
	v->a[56744] = state(1663);
	v->a[56745] = 1;
	v->a[56746] = sym_else_clause;
	v->a[56747] = state(1503);
	v->a[56748] = 2;
	v->a[56749] = sym_elif_clause;
	v->a[56750] = aux_sym_if_statement_repeat1;
	v->a[56751] = 6;
	v->a[56752] = actions(1436);
	v->a[56753] = 1;
	v->a[56754] = sym_comment;
	v->a[56755] = actions(2930);
	v->a[56756] = 1;
	v->a[56757] = anon_sym_elif;
	v->a[56758] = actions(2932);
	v->a[56759] = 1;
	small_parse_table_2838(v);
}

void	small_parse_table_2838(t_small_parse_table_array *v)
{
	v->a[56760] = anon_sym_else;
	v->a[56761] = actions(2940);
	v->a[56762] = 1;
	v->a[56763] = anon_sym_fi;
	v->a[56764] = state(1639);
	v->a[56765] = 1;
	v->a[56766] = sym_else_clause;
	v->a[56767] = state(1503);
	v->a[56768] = 2;
	v->a[56769] = sym_elif_clause;
	v->a[56770] = aux_sym_if_statement_repeat1;
	v->a[56771] = 3;
	v->a[56772] = actions(3);
	v->a[56773] = 1;
	v->a[56774] = sym_comment;
	v->a[56775] = actions(1046);
	v->a[56776] = 2;
	v->a[56777] = sym__concat;
	v->a[56778] = aux_sym_heredoc_redirect_token1;
	v->a[56779] = actions(1048);
	small_parse_table_2839(v);
}

void	small_parse_table_2839(t_small_parse_table_array *v)
{
	v->a[56780] = 4;
	v->a[56781] = anon_sym_in;
	v->a[56782] = anon_sym_SEMI_SEMI;
	v->a[56783] = aux_sym_concatenation_token1;
	v->a[56784] = anon_sym_SEMI;
	v->a[56785] = 3;
	v->a[56786] = actions(3);
	v->a[56787] = 1;
	v->a[56788] = sym_comment;
	v->a[56789] = actions(1054);
	v->a[56790] = 2;
	v->a[56791] = sym__concat;
	v->a[56792] = aux_sym_heredoc_redirect_token1;
	v->a[56793] = actions(1056);
	v->a[56794] = 4;
	v->a[56795] = anon_sym_in;
	v->a[56796] = anon_sym_SEMI_SEMI;
	v->a[56797] = aux_sym_concatenation_token1;
	v->a[56798] = anon_sym_SEMI;
	v->a[56799] = 6;
	small_parse_table_2840(v);
}

/* EOF small_parse_table_567.c */
