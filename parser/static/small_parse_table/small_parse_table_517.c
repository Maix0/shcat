/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_517.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2585(t_small_parse_table_array *v)
{
	v->a[51700] = actions(1734);
	v->a[51701] = 2;
	v->a[51702] = sym_file_descriptor;
	v->a[51703] = sym_variable_name;
	v->a[51704] = actions(1730);
	v->a[51705] = 28;
	v->a[51706] = anon_sym_for;
	v->a[51707] = anon_sym_while;
	v->a[51708] = anon_sym_until;
	v->a[51709] = anon_sym_if;
	v->a[51710] = anon_sym_case;
	v->a[51711] = anon_sym_LPAREN;
	v->a[51712] = anon_sym_LBRACE;
	v->a[51713] = anon_sym_BANG;
	v->a[51714] = anon_sym_LT;
	v->a[51715] = anon_sym_GT;
	v->a[51716] = anon_sym_GT_GT;
	v->a[51717] = anon_sym_AMP_GT;
	v->a[51718] = anon_sym_AMP_GT_GT;
	v->a[51719] = anon_sym_LT_AMP;
	small_parse_table_2586(v);
}

void	small_parse_table_2586(t_small_parse_table_array *v)
{
	v->a[51720] = anon_sym_GT_AMP;
	v->a[51721] = anon_sym_GT_PIPE;
	v->a[51722] = anon_sym_LT_AMP_DASH;
	v->a[51723] = anon_sym_GT_AMP_DASH;
	v->a[51724] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51725] = anon_sym_DOLLAR;
	v->a[51726] = anon_sym_DQUOTE;
	v->a[51727] = sym_raw_string;
	v->a[51728] = aux_sym_number_token1;
	v->a[51729] = aux_sym_number_token2;
	v->a[51730] = anon_sym_DOLLAR_LBRACE;
	v->a[51731] = anon_sym_DOLLAR_LPAREN;
	v->a[51732] = anon_sym_BQUOTE;
	v->a[51733] = sym_word;
	v->a[51734] = 6;
	v->a[51735] = actions(3);
	v->a[51736] = 1;
	v->a[51737] = sym_comment;
	v->a[51738] = actions(1208);
	v->a[51739] = 1;
	small_parse_table_2587(v);
}

void	small_parse_table_2587(t_small_parse_table_array *v)
{
	v->a[51740] = aux_sym_concatenation_token1;
	v->a[51741] = actions(1212);
	v->a[51742] = 1;
	v->a[51743] = sym__concat;
	v->a[51744] = state(772);
	v->a[51745] = 1;
	v->a[51746] = aux_sym_concatenation_repeat1;
	v->a[51747] = actions(1202);
	v->a[51748] = 2;
	v->a[51749] = sym_file_descriptor;
	v->a[51750] = sym_variable_name;
	v->a[51751] = actions(1198);
	v->a[51752] = 26;
	v->a[51753] = anon_sym_PIPE;
	v->a[51754] = anon_sym_AMP_AMP;
	v->a[51755] = anon_sym_PIPE_PIPE;
	v->a[51756] = anon_sym_LT;
	v->a[51757] = anon_sym_GT;
	v->a[51758] = anon_sym_GT_GT;
	v->a[51759] = anon_sym_AMP_GT;
	small_parse_table_2588(v);
}

void	small_parse_table_2588(t_small_parse_table_array *v)
{
	v->a[51760] = anon_sym_AMP_GT_GT;
	v->a[51761] = anon_sym_LT_AMP;
	v->a[51762] = anon_sym_GT_AMP;
	v->a[51763] = anon_sym_GT_PIPE;
	v->a[51764] = anon_sym_LT_AMP_DASH;
	v->a[51765] = anon_sym_GT_AMP_DASH;
	v->a[51766] = anon_sym_LT_LT;
	v->a[51767] = anon_sym_LT_LT_DASH;
	v->a[51768] = aux_sym_heredoc_redirect_token1;
	v->a[51769] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51770] = anon_sym_DOLLAR;
	v->a[51771] = anon_sym_DQUOTE;
	v->a[51772] = sym_raw_string;
	v->a[51773] = aux_sym_number_token1;
	v->a[51774] = aux_sym_number_token2;
	v->a[51775] = anon_sym_DOLLAR_LBRACE;
	v->a[51776] = anon_sym_DOLLAR_LPAREN;
	v->a[51777] = anon_sym_BQUOTE;
	v->a[51778] = sym_word;
	v->a[51779] = 14;
	small_parse_table_2589(v);
}

void	small_parse_table_2589(t_small_parse_table_array *v)
{
	v->a[51780] = actions(3);
	v->a[51781] = 1;
	v->a[51782] = sym_comment;
	v->a[51783] = actions(755);
	v->a[51784] = 1;
	v->a[51785] = sym_file_descriptor;
	v->a[51786] = actions(1902);
	v->a[51787] = 1;
	v->a[51788] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51789] = actions(1904);
	v->a[51790] = 1;
	v->a[51791] = anon_sym_DOLLAR;
	v->a[51792] = actions(1906);
	v->a[51793] = 1;
	v->a[51794] = anon_sym_DQUOTE;
	v->a[51795] = actions(1908);
	v->a[51796] = 1;
	v->a[51797] = aux_sym_number_token1;
	v->a[51798] = actions(1910);
	v->a[51799] = 1;
	small_parse_table_2590(v);
}

/* EOF small_parse_table_517.c */
