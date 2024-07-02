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
	v->a[56700] = actions(700);
	v->a[56701] = 2;
	v->a[56702] = anon_sym_LT_LT;
	v->a[56703] = anon_sym_LT_LT_DASH;
	v->a[56704] = actions(696);
	v->a[56705] = 3;
	v->a[56706] = anon_sym_SEMI_SEMI;
	v->a[56707] = anon_sym_AMP;
	v->a[56708] = anon_sym_SEMI;
	v->a[56709] = state(1031);
	v->a[56710] = 3;
	v->a[56711] = sym_file_redirect;
	v->a[56712] = sym_heredoc_redirect;
	v->a[56713] = aux_sym_redirected_statement_repeat1;
	v->a[56714] = actions(1855);
	v->a[56715] = 7;
	v->a[56716] = anon_sym_LT;
	v->a[56717] = anon_sym_GT;
	v->a[56718] = anon_sym_GT_GT;
	v->a[56719] = anon_sym_LT_AMP;
	small_parse_table_2836(v);
}

void	small_parse_table_2836(t_small_parse_table_array *v)
{
	v->a[56720] = anon_sym_GT_AMP;
	v->a[56721] = anon_sym_GT_PIPE;
	v->a[56722] = anon_sym_LT_GT;
	v->a[56723] = 16;
	v->a[56724] = actions(3);
	v->a[56725] = 1;
	v->a[56726] = sym_comment;
	v->a[56727] = actions(1635);
	v->a[56728] = 1;
	v->a[56729] = anon_sym_esac;
	v->a[56730] = actions(1637);
	v->a[56731] = 1;
	v->a[56732] = anon_sym_LPAREN;
	v->a[56733] = actions(1641);
	v->a[56734] = 1;
	v->a[56735] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56736] = actions(1643);
	v->a[56737] = 1;
	v->a[56738] = anon_sym_DOLLAR;
	v->a[56739] = actions(1645);
	small_parse_table_2837(v);
}

void	small_parse_table_2837(t_small_parse_table_array *v)
{
	v->a[56740] = 1;
	v->a[56741] = anon_sym_DQUOTE;
	v->a[56742] = actions(1647);
	v->a[56743] = 1;
	v->a[56744] = anon_sym_DOLLAR_LBRACE;
	v->a[56745] = actions(1649);
	v->a[56746] = 1;
	v->a[56747] = anon_sym_DOLLAR_LPAREN;
	v->a[56748] = actions(1651);
	v->a[56749] = 1;
	v->a[56750] = anon_sym_BQUOTE;
	v->a[56751] = actions(1653);
	v->a[56752] = 1;
	v->a[56753] = sym_extglob_pattern;
	v->a[56754] = state(1080);
	v->a[56755] = 1;
	v->a[56756] = aux_sym_case_statement_repeat1;
	v->a[56757] = state(1713);
	v->a[56758] = 1;
	v->a[56759] = sym_case_item;
	small_parse_table_2838(v);
}

void	small_parse_table_2838(t_small_parse_table_array *v)
{
	v->a[56760] = state(1998);
	v->a[56761] = 1;
	v->a[56762] = sym__case_item_last;
	v->a[56763] = state(1873);
	v->a[56764] = 2;
	v->a[56765] = sym_concatenation;
	v->a[56766] = sym__extglob_blob;
	v->a[56767] = actions(1633);
	v->a[56768] = 3;
	v->a[56769] = sym_raw_string;
	v->a[56770] = sym_number;
	v->a[56771] = sym_word;
	v->a[56772] = state(1806);
	v->a[56773] = 5;
	v->a[56774] = sym_arithmetic_expansion;
	v->a[56775] = sym_string;
	v->a[56776] = sym_simple_expansion;
	v->a[56777] = sym_expansion;
	v->a[56778] = sym_command_substitution;
	v->a[56779] = 6;
	small_parse_table_2839(v);
}

void	small_parse_table_2839(t_small_parse_table_array *v)
{
	v->a[56780] = actions(3);
	v->a[56781] = 1;
	v->a[56782] = sym_comment;
	v->a[56783] = actions(1881);
	v->a[56784] = 1;
	v->a[56785] = aux_sym_concatenation_token1;
	v->a[56786] = actions(1916);
	v->a[56787] = 1;
	v->a[56788] = sym__concat;
	v->a[56789] = state(893);
	v->a[56790] = 1;
	v->a[56791] = aux_sym_concatenation_repeat1;
	v->a[56792] = actions(1043);
	v->a[56793] = 3;
	v->a[56794] = sym_file_descriptor;
	v->a[56795] = sym_variable_name;
	v->a[56796] = aux_sym_heredoc_redirect_token1;
	v->a[56797] = actions(1045);
	v->a[56798] = 16;
	v->a[56799] = anon_sym_PIPE;
	small_parse_table_2840(v);
}

/* EOF small_parse_table_567.c */
