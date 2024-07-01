/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_797.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3985(t_small_parse_table_array *v)
{
	v->a[79700] = actions(1692);
	v->a[79701] = 1;
	v->a[79702] = anon_sym_DOLLAR;
	v->a[79703] = actions(1694);
	v->a[79704] = 1;
	v->a[79705] = anon_sym_DQUOTE;
	v->a[79706] = actions(1696);
	v->a[79707] = 1;
	v->a[79708] = anon_sym_DOLLAR_LBRACE;
	v->a[79709] = actions(1698);
	v->a[79710] = 1;
	v->a[79711] = anon_sym_DOLLAR_LPAREN;
	v->a[79712] = actions(1700);
	v->a[79713] = 1;
	v->a[79714] = anon_sym_BQUOTE;
	v->a[79715] = state(798);
	v->a[79716] = 2;
	v->a[79717] = sym_concatenation;
	v->a[79718] = aux_sym_for_statement_repeat1;
	v->a[79719] = actions(1688);
	small_parse_table_3986(v);
}

void	small_parse_table_3986(t_small_parse_table_array *v)
{
	v->a[79720] = 3;
	v->a[79721] = sym_raw_string;
	v->a[79722] = sym_number;
	v->a[79723] = sym_word;
	v->a[79724] = state(1003);
	v->a[79725] = 5;
	v->a[79726] = sym_arithmetic_expansion;
	v->a[79727] = sym_string;
	v->a[79728] = sym_simple_expansion;
	v->a[79729] = sym_expansion;
	v->a[79730] = sym_command_substitution;
	v->a[79731] = 9;
	v->a[79732] = actions(754);
	v->a[79733] = 1;
	v->a[79734] = anon_sym_LT_LT;
	v->a[79735] = actions(870);
	v->a[79736] = 1;
	v->a[79737] = sym_comment;
	v->a[79738] = actions(2011);
	v->a[79739] = 1;
	small_parse_table_3987(v);
}

void	small_parse_table_3987(t_small_parse_table_array *v)
{
	v->a[79740] = sym_file_descriptor;
	v->a[79741] = actions(3057);
	v->a[79742] = 1;
	v->a[79743] = anon_sym_LT_LT_DASH;
	v->a[79744] = actions(3086);
	v->a[79745] = 2;
	v->a[79746] = anon_sym_AMP_AMP;
	v->a[79747] = anon_sym_PIPE_PIPE;
	v->a[79748] = actions(3088);
	v->a[79749] = 2;
	v->a[79750] = anon_sym_GT_GT;
	v->a[79751] = anon_sym_GT_PIPE;
	v->a[79752] = actions(3090);
	v->a[79753] = 2;
	v->a[79754] = anon_sym_LT_AMP_DASH;
	v->a[79755] = anon_sym_GT_AMP_DASH;
	v->a[79756] = state(1128);
	v->a[79757] = 3;
	v->a[79758] = sym_file_redirect;
	v->a[79759] = sym_heredoc_redirect;
	small_parse_table_3988(v);
}

void	small_parse_table_3988(t_small_parse_table_array *v)
{
	v->a[79760] = aux_sym_redirected_statement_repeat1;
	v->a[79761] = actions(2005);
	v->a[79762] = 4;
	v->a[79763] = anon_sym_LT;
	v->a[79764] = anon_sym_GT;
	v->a[79765] = anon_sym_LT_AMP;
	v->a[79766] = anon_sym_GT_AMP;
	v->a[79767] = 3;
	v->a[79768] = actions(870);
	v->a[79769] = 1;
	v->a[79770] = sym_comment;
	v->a[79771] = actions(980);
	v->a[79772] = 6;
	v->a[79773] = anon_sym_PIPE;
	v->a[79774] = anon_sym_LT;
	v->a[79775] = anon_sym_GT;
	v->a[79776] = anon_sym_LT_AMP;
	v->a[79777] = anon_sym_GT_AMP;
	v->a[79778] = anon_sym_LT_LT;
	v->a[79779] = actions(982);
	small_parse_table_3989(v);
}

void	small_parse_table_3989(t_small_parse_table_array *v)
{
	v->a[79780] = 10;
	v->a[79781] = sym_file_descriptor;
	v->a[79782] = sym__concat;
	v->a[79783] = anon_sym_AMP_AMP;
	v->a[79784] = anon_sym_PIPE_PIPE;
	v->a[79785] = anon_sym_GT_GT;
	v->a[79786] = anon_sym_GT_PIPE;
	v->a[79787] = anon_sym_LT_AMP_DASH;
	v->a[79788] = anon_sym_GT_AMP_DASH;
	v->a[79789] = anon_sym_LT_LT_DASH;
	v->a[79790] = aux_sym_concatenation_token1;
	v->a[79791] = 10;
	v->a[79792] = actions(3);
	v->a[79793] = 1;
	v->a[79794] = sym_comment;
	v->a[79795] = actions(1690);
	v->a[79796] = 1;
	v->a[79797] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79798] = actions(1692);
	v->a[79799] = 1;
	small_parse_table_3990(v);
}

/* EOF small_parse_table_797.c */
