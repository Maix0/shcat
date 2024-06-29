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
	v->a[79700] = 9;
	v->a[79701] = sym_file_descriptor;
	v->a[79702] = anon_sym_AMP_AMP;
	v->a[79703] = anon_sym_PIPE_PIPE;
	v->a[79704] = anon_sym_GT_GT;
	v->a[79705] = anon_sym_AMP_GT_GT;
	v->a[79706] = anon_sym_GT_PIPE;
	v->a[79707] = anon_sym_LT_AMP_DASH;
	v->a[79708] = anon_sym_GT_AMP_DASH;
	v->a[79709] = anon_sym_LT_LT_DASH;
	v->a[79710] = 10;
	v->a[79711] = actions(3);
	v->a[79712] = 1;
	v->a[79713] = sym_comment;
	v->a[79714] = actions(904);
	v->a[79715] = 1;
	v->a[79716] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79717] = actions(908);
	v->a[79718] = 1;
	v->a[79719] = anon_sym_DQUOTE;
	small_parse_table_3986(v);
}

void	small_parse_table_3986(t_small_parse_table_array *v)
{
	v->a[79720] = actions(910);
	v->a[79721] = 1;
	v->a[79722] = anon_sym_DOLLAR_LBRACE;
	v->a[79723] = actions(912);
	v->a[79724] = 1;
	v->a[79725] = anon_sym_DOLLAR_LPAREN;
	v->a[79726] = actions(914);
	v->a[79727] = 1;
	v->a[79728] = anon_sym_BQUOTE;
	v->a[79729] = actions(2827);
	v->a[79730] = 1;
	v->a[79731] = sym__bare_dollar;
	v->a[79732] = actions(2949);
	v->a[79733] = 1;
	v->a[79734] = anon_sym_DOLLAR;
	v->a[79735] = actions(2823);
	v->a[79736] = 5;
	v->a[79737] = aux_sym_concatenation_token1;
	v->a[79738] = sym_raw_string;
	v->a[79739] = sym_number;
	small_parse_table_3987(v);
}

void	small_parse_table_3987(t_small_parse_table_array *v)
{
	v->a[79740] = sym__comment_word;
	v->a[79741] = sym_word;
	v->a[79742] = state(1040);
	v->a[79743] = 5;
	v->a[79744] = sym_arithmetic_expansion;
	v->a[79745] = sym_string;
	v->a[79746] = sym_simple_expansion;
	v->a[79747] = sym_expansion;
	v->a[79748] = sym_command_substitution;
	v->a[79749] = 10;
	v->a[79750] = actions(3);
	v->a[79751] = 1;
	v->a[79752] = sym_comment;
	v->a[79753] = actions(477);
	v->a[79754] = 1;
	v->a[79755] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79756] = actions(481);
	v->a[79757] = 1;
	v->a[79758] = anon_sym_DQUOTE;
	v->a[79759] = actions(483);
	small_parse_table_3988(v);
}

void	small_parse_table_3988(t_small_parse_table_array *v)
{
	v->a[79760] = 1;
	v->a[79761] = anon_sym_DOLLAR_LBRACE;
	v->a[79762] = actions(485);
	v->a[79763] = 1;
	v->a[79764] = anon_sym_DOLLAR_LPAREN;
	v->a[79765] = actions(487);
	v->a[79766] = 1;
	v->a[79767] = anon_sym_BQUOTE;
	v->a[79768] = actions(2693);
	v->a[79769] = 1;
	v->a[79770] = sym__bare_dollar;
	v->a[79771] = actions(2951);
	v->a[79772] = 1;
	v->a[79773] = anon_sym_DOLLAR;
	v->a[79774] = actions(2689);
	v->a[79775] = 5;
	v->a[79776] = aux_sym_concatenation_token1;
	v->a[79777] = sym_raw_string;
	v->a[79778] = sym_number;
	v->a[79779] = sym__comment_word;
	small_parse_table_3989(v);
}

void	small_parse_table_3989(t_small_parse_table_array *v)
{
	v->a[79780] = sym_word;
	v->a[79781] = state(551);
	v->a[79782] = 5;
	v->a[79783] = sym_arithmetic_expansion;
	v->a[79784] = sym_string;
	v->a[79785] = sym_simple_expansion;
	v->a[79786] = sym_expansion;
	v->a[79787] = sym_command_substitution;
	v->a[79788] = 10;
	v->a[79789] = actions(3);
	v->a[79790] = 1;
	v->a[79791] = sym_comment;
	v->a[79792] = actions(2719);
	v->a[79793] = 1;
	v->a[79794] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79795] = actions(2723);
	v->a[79796] = 1;
	v->a[79797] = anon_sym_DQUOTE;
	v->a[79798] = actions(2725);
	v->a[79799] = 1;
	small_parse_table_3990(v);
}

/* EOF small_parse_table_797.c */
