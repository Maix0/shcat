/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_841.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4205(t_small_parse_table_array *v)
{
	v->a[84100] = sym_raw_string;
	v->a[84101] = sym_number;
	v->a[84102] = sym__comment_word;
	v->a[84103] = sym_word;
	v->a[84104] = state(1775);
	v->a[84105] = 5;
	v->a[84106] = sym_arithmetic_expansion;
	v->a[84107] = sym_string;
	v->a[84108] = sym_simple_expansion;
	v->a[84109] = sym_expansion;
	v->a[84110] = sym_command_substitution;
	v->a[84111] = 6;
	v->a[84112] = actions(3);
	v->a[84113] = 1;
	v->a[84114] = sym_comment;
	v->a[84115] = actions(3234);
	v->a[84116] = 1;
	v->a[84117] = aux_sym_concatenation_token1;
	v->a[84118] = actions(3236);
	v->a[84119] = 1;
	small_parse_table_4206(v);
}

void	small_parse_table_4206(t_small_parse_table_array *v)
{
	v->a[84120] = sym__concat;
	v->a[84121] = state(1634);
	v->a[84122] = 1;
	v->a[84123] = aux_sym_concatenation_repeat1;
	v->a[84124] = actions(972);
	v->a[84125] = 2;
	v->a[84126] = sym_file_descriptor;
	v->a[84127] = aux_sym_heredoc_redirect_token1;
	v->a[84128] = actions(974);
	v->a[84129] = 12;
	v->a[84130] = anon_sym_AMP_AMP;
	v->a[84131] = anon_sym_PIPE_PIPE;
	v->a[84132] = anon_sym_LT;
	v->a[84133] = anon_sym_GT;
	v->a[84134] = anon_sym_GT_GT;
	v->a[84135] = anon_sym_AMP_GT;
	v->a[84136] = anon_sym_AMP_GT_GT;
	v->a[84137] = anon_sym_LT_AMP;
	v->a[84138] = anon_sym_GT_AMP;
	v->a[84139] = anon_sym_GT_PIPE;
	small_parse_table_4207(v);
}

void	small_parse_table_4207(t_small_parse_table_array *v)
{
	v->a[84140] = anon_sym_LT_AMP_DASH;
	v->a[84141] = anon_sym_GT_AMP_DASH;
	v->a[84142] = 10;
	v->a[84143] = actions(3);
	v->a[84144] = 1;
	v->a[84145] = sym_comment;
	v->a[84146] = actions(1749);
	v->a[84147] = 1;
	v->a[84148] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84149] = actions(1751);
	v->a[84150] = 1;
	v->a[84151] = anon_sym_DOLLAR;
	v->a[84152] = actions(1753);
	v->a[84153] = 1;
	v->a[84154] = anon_sym_DQUOTE;
	v->a[84155] = actions(1755);
	v->a[84156] = 1;
	v->a[84157] = anon_sym_DOLLAR_LBRACE;
	v->a[84158] = actions(1757);
	v->a[84159] = 1;
	small_parse_table_4208(v);
}

void	small_parse_table_4208(t_small_parse_table_array *v)
{
	v->a[84160] = anon_sym_DOLLAR_LPAREN;
	v->a[84161] = actions(1759);
	v->a[84162] = 1;
	v->a[84163] = anon_sym_BQUOTE;
	v->a[84164] = actions(3240);
	v->a[84165] = 1;
	v->a[84166] = sym__bare_dollar;
	v->a[84167] = actions(3238);
	v->a[84168] = 5;
	v->a[84169] = aux_sym_concatenation_token1;
	v->a[84170] = sym_raw_string;
	v->a[84171] = sym_number;
	v->a[84172] = sym__comment_word;
	v->a[84173] = sym_word;
	v->a[84174] = state(1171);
	v->a[84175] = 5;
	v->a[84176] = sym_arithmetic_expansion;
	v->a[84177] = sym_string;
	v->a[84178] = sym_simple_expansion;
	v->a[84179] = sym_expansion;
	small_parse_table_4209(v);
}

void	small_parse_table_4209(t_small_parse_table_array *v)
{
	v->a[84180] = sym_command_substitution;
	v->a[84181] = 10;
	v->a[84182] = actions(3);
	v->a[84183] = 1;
	v->a[84184] = sym_comment;
	v->a[84185] = actions(1588);
	v->a[84186] = 1;
	v->a[84187] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84188] = actions(1590);
	v->a[84189] = 1;
	v->a[84190] = anon_sym_DOLLAR;
	v->a[84191] = actions(1592);
	v->a[84192] = 1;
	v->a[84193] = anon_sym_DQUOTE;
	v->a[84194] = actions(1594);
	v->a[84195] = 1;
	v->a[84196] = anon_sym_DOLLAR_LBRACE;
	v->a[84197] = actions(1596);
	v->a[84198] = 1;
	v->a[84199] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4210(v);
}

/* EOF small_parse_table_841.c */
