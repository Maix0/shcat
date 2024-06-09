/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_907.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4535(t_small_parse_table_array *v)
{
	v->a[90700] = sym_comment;
	v->a[90701] = actions(3558);
	v->a[90702] = 1;
	v->a[90703] = anon_sym_DQUOTE;
	v->a[90704] = actions(3712);
	v->a[90705] = 1;
	v->a[90706] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90707] = actions(3716);
	v->a[90708] = 1;
	v->a[90709] = sym_string_content;
	v->a[90710] = actions(3718);
	v->a[90711] = 1;
	v->a[90712] = anon_sym_DOLLAR_LBRACE;
	v->a[90713] = actions(3720);
	v->a[90714] = 1;
	v->a[90715] = anon_sym_DOLLAR_LPAREN;
	v->a[90716] = actions(3722);
	v->a[90717] = 1;
	v->a[90718] = anon_sym_BQUOTE;
	v->a[90719] = actions(4006);
	small_parse_table_4536(v);
}

void	small_parse_table_4536(t_small_parse_table_array *v)
{
	v->a[90720] = 1;
	v->a[90721] = anon_sym_DOLLAR;
	v->a[90722] = state(1738);
	v->a[90723] = 1;
	v->a[90724] = aux_sym_string_repeat1;
	v->a[90725] = state(1869);
	v->a[90726] = 4;
	v->a[90727] = sym_arithmetic_expansion;
	v->a[90728] = sym_simple_expansion;
	v->a[90729] = sym_expansion;
	v->a[90730] = sym_command_substitution;
	v->a[90731] = 10;
	v->a[90732] = actions(3);
	v->a[90733] = 1;
	v->a[90734] = sym_comment;
	v->a[90735] = actions(3584);
	v->a[90736] = 1;
	v->a[90737] = anon_sym_DQUOTE;
	v->a[90738] = actions(3712);
	v->a[90739] = 1;
	small_parse_table_4537(v);
}

void	small_parse_table_4537(t_small_parse_table_array *v)
{
	v->a[90740] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90741] = actions(3716);
	v->a[90742] = 1;
	v->a[90743] = sym_string_content;
	v->a[90744] = actions(3718);
	v->a[90745] = 1;
	v->a[90746] = anon_sym_DOLLAR_LBRACE;
	v->a[90747] = actions(3720);
	v->a[90748] = 1;
	v->a[90749] = anon_sym_DOLLAR_LPAREN;
	v->a[90750] = actions(3722);
	v->a[90751] = 1;
	v->a[90752] = anon_sym_BQUOTE;
	v->a[90753] = actions(4008);
	v->a[90754] = 1;
	v->a[90755] = anon_sym_DOLLAR;
	v->a[90756] = state(1738);
	v->a[90757] = 1;
	v->a[90758] = aux_sym_string_repeat1;
	v->a[90759] = state(1869);
	small_parse_table_4538(v);
}

void	small_parse_table_4538(t_small_parse_table_array *v)
{
	v->a[90760] = 4;
	v->a[90761] = sym_arithmetic_expansion;
	v->a[90762] = sym_simple_expansion;
	v->a[90763] = sym_expansion;
	v->a[90764] = sym_command_substitution;
	v->a[90765] = 2;
	v->a[90766] = actions(3);
	v->a[90767] = 1;
	v->a[90768] = sym_comment;
	v->a[90769] = actions(3480);
	v->a[90770] = 11;
	v->a[90771] = aux_sym_heredoc_redirect_token1;
	v->a[90772] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90773] = anon_sym_DOLLAR;
	v->a[90774] = anon_sym_DQUOTE;
	v->a[90775] = sym_raw_string;
	v->a[90776] = aux_sym_number_token1;
	v->a[90777] = aux_sym_number_token2;
	v->a[90778] = anon_sym_DOLLAR_LBRACE;
	v->a[90779] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4539(v);
}

void	small_parse_table_4539(t_small_parse_table_array *v)
{
	v->a[90780] = anon_sym_BQUOTE;
	v->a[90781] = sym_word;
	v->a[90782] = 4;
	v->a[90783] = actions(1404);
	v->a[90784] = 1;
	v->a[90785] = sym_comment;
	v->a[90786] = actions(4014);
	v->a[90787] = 2;
	v->a[90788] = anon_sym_LT_AMP_DASH;
	v->a[90789] = anon_sym_GT_AMP_DASH;
	v->a[90790] = actions(4012);
	v->a[90791] = 3;
	v->a[90792] = anon_sym_GT_GT;
	v->a[90793] = anon_sym_AMP_GT_GT;
	v->a[90794] = anon_sym_GT_PIPE;
	v->a[90795] = actions(4010);
	v->a[90796] = 5;
	v->a[90797] = anon_sym_LT;
	v->a[90798] = anon_sym_GT;
	v->a[90799] = anon_sym_AMP_GT;
	small_parse_table_4540(v);
}

/* EOF small_parse_table_907.c */
