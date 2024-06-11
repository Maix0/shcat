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
	v->a[90700] = actions(3202);
	v->a[90701] = 1;
	v->a[90702] = anon_sym_DOLLAR;
	v->a[90703] = actions(3204);
	v->a[90704] = 1;
	v->a[90705] = anon_sym_DQUOTE;
	v->a[90706] = actions(3206);
	v->a[90707] = 1;
	v->a[90708] = anon_sym_DOLLAR_LBRACE;
	v->a[90709] = actions(3208);
	v->a[90710] = 1;
	v->a[90711] = anon_sym_DOLLAR_LPAREN;
	v->a[90712] = actions(3210);
	v->a[90713] = 1;
	v->a[90714] = anon_sym_BQUOTE;
	v->a[90715] = state(483);
	v->a[90716] = 2;
	v->a[90717] = sym_concatenation;
	v->a[90718] = aux_sym_for_statement_repeat1;
	v->a[90719] = actions(3573);
	small_parse_table_4536(v);
}

void	small_parse_table_4536(t_small_parse_table_array *v)
{
	v->a[90720] = 3;
	v->a[90721] = sym_raw_string;
	v->a[90722] = sym_number;
	v->a[90723] = sym_word;
	v->a[90724] = state(950);
	v->a[90725] = 5;
	v->a[90726] = sym_arithmetic_expansion;
	v->a[90727] = sym_string;
	v->a[90728] = sym_simple_expansion;
	v->a[90729] = sym_expansion;
	v->a[90730] = sym_command_substitution;
	v->a[90731] = 3;
	v->a[90732] = actions(3);
	v->a[90733] = 1;
	v->a[90734] = sym_comment;
	v->a[90735] = actions(1076);
	v->a[90736] = 3;
	v->a[90737] = sym_file_descriptor;
	v->a[90738] = sym__concat;
	v->a[90739] = aux_sym_heredoc_redirect_token1;
	small_parse_table_4537(v);
}

void	small_parse_table_4537(t_small_parse_table_array *v)
{
	v->a[90740] = actions(1074);
	v->a[90741] = 13;
	v->a[90742] = anon_sym_AMP_AMP;
	v->a[90743] = anon_sym_PIPE_PIPE;
	v->a[90744] = anon_sym_LT;
	v->a[90745] = anon_sym_GT;
	v->a[90746] = anon_sym_GT_GT;
	v->a[90747] = anon_sym_AMP_GT;
	v->a[90748] = anon_sym_AMP_GT_GT;
	v->a[90749] = anon_sym_LT_AMP;
	v->a[90750] = anon_sym_GT_AMP;
	v->a[90751] = anon_sym_GT_PIPE;
	v->a[90752] = anon_sym_LT_AMP_DASH;
	v->a[90753] = anon_sym_GT_AMP_DASH;
	v->a[90754] = aux_sym_concatenation_token1;
	v->a[90755] = 10;
	v->a[90756] = actions(3);
	v->a[90757] = 1;
	v->a[90758] = sym_comment;
	v->a[90759] = actions(749);
	small_parse_table_4538(v);
}

void	small_parse_table_4538(t_small_parse_table_array *v)
{
	v->a[90760] = 1;
	v->a[90761] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90762] = actions(751);
	v->a[90763] = 1;
	v->a[90764] = anon_sym_DOLLAR;
	v->a[90765] = actions(753);
	v->a[90766] = 1;
	v->a[90767] = anon_sym_DQUOTE;
	v->a[90768] = actions(755);
	v->a[90769] = 1;
	v->a[90770] = anon_sym_DOLLAR_LBRACE;
	v->a[90771] = actions(757);
	v->a[90772] = 1;
	v->a[90773] = anon_sym_DOLLAR_LPAREN;
	v->a[90774] = actions(759);
	v->a[90775] = 1;
	v->a[90776] = anon_sym_BQUOTE;
	v->a[90777] = state(263);
	v->a[90778] = 2;
	v->a[90779] = sym_concatenation;
	small_parse_table_4539(v);
}

void	small_parse_table_4539(t_small_parse_table_array *v)
{
	v->a[90780] = aux_sym_for_statement_repeat1;
	v->a[90781] = actions(928);
	v->a[90782] = 3;
	v->a[90783] = sym_raw_string;
	v->a[90784] = sym_number;
	v->a[90785] = sym_word;
	v->a[90786] = state(646);
	v->a[90787] = 5;
	v->a[90788] = sym_arithmetic_expansion;
	v->a[90789] = sym_string;
	v->a[90790] = sym_simple_expansion;
	v->a[90791] = sym_expansion;
	v->a[90792] = sym_command_substitution;
	v->a[90793] = 3;
	v->a[90794] = actions(3);
	v->a[90795] = 1;
	v->a[90796] = sym_comment;
	v->a[90797] = actions(1124);
	v->a[90798] = 3;
	v->a[90799] = sym_file_descriptor;
	small_parse_table_4540(v);
}

/* EOF small_parse_table_907.c */
