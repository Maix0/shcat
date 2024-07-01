/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_452.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2260(t_small_parse_table_array *v)
{
	v->a[45200] = anon_sym_DOLLAR_LBRACE;
	v->a[45201] = actions(1646);
	v->a[45202] = 1;
	v->a[45203] = anon_sym_DOLLAR_LPAREN;
	v->a[45204] = actions(1648);
	v->a[45205] = 1;
	v->a[45206] = anon_sym_BQUOTE;
	v->a[45207] = actions(1650);
	v->a[45208] = 1;
	v->a[45209] = sym_extglob_pattern;
	v->a[45210] = actions(1652);
	v->a[45211] = 1;
	v->a[45212] = anon_sym_esac;
	v->a[45213] = state(956);
	v->a[45214] = 1;
	v->a[45215] = sym_terminator;
	v->a[45216] = state(1066);
	v->a[45217] = 1;
	v->a[45218] = aux_sym_case_statement_repeat1;
	v->a[45219] = state(1713);
	small_parse_table_2261(v);
}

void	small_parse_table_2261(t_small_parse_table_array *v)
{
	v->a[45220] = 1;
	v->a[45221] = sym_case_item;
	v->a[45222] = state(1935);
	v->a[45223] = 1;
	v->a[45224] = sym__case_item_last;
	v->a[45225] = state(1871);
	v->a[45226] = 2;
	v->a[45227] = sym_concatenation;
	v->a[45228] = sym__extglob_blob;
	v->a[45229] = actions(1630);
	v->a[45230] = 3;
	v->a[45231] = sym_raw_string;
	v->a[45232] = sym_number;
	v->a[45233] = sym_word;
	v->a[45234] = actions(1636);
	v->a[45235] = 4;
	v->a[45236] = anon_sym_SEMI_SEMI;
	v->a[45237] = aux_sym_heredoc_redirect_token1;
	v->a[45238] = anon_sym_AMP;
	v->a[45239] = anon_sym_SEMI;
	small_parse_table_2262(v);
}

void	small_parse_table_2262(t_small_parse_table_array *v)
{
	v->a[45240] = state(1804);
	v->a[45241] = 5;
	v->a[45242] = sym_arithmetic_expansion;
	v->a[45243] = sym_string;
	v->a[45244] = sym_simple_expansion;
	v->a[45245] = sym_expansion;
	v->a[45246] = sym_command_substitution;
	v->a[45247] = 6;
	v->a[45248] = actions(3);
	v->a[45249] = 1;
	v->a[45250] = sym_comment;
	v->a[45251] = actions(1654);
	v->a[45252] = 1;
	v->a[45253] = aux_sym_concatenation_token1;
	v->a[45254] = actions(1656);
	v->a[45255] = 1;
	v->a[45256] = sym__concat;
	v->a[45257] = state(723);
	v->a[45258] = 1;
	v->a[45259] = aux_sym_concatenation_repeat1;
	small_parse_table_2263(v);
}

void	small_parse_table_2263(t_small_parse_table_array *v)
{
	v->a[45260] = actions(1047);
	v->a[45261] = 2;
	v->a[45262] = sym_file_descriptor;
	v->a[45263] = sym__bare_dollar;
	v->a[45264] = actions(1043);
	v->a[45265] = 22;
	v->a[45266] = anon_sym_LPAREN;
	v->a[45267] = anon_sym_PIPE;
	v->a[45268] = anon_sym_AMP_AMP;
	v->a[45269] = anon_sym_PIPE_PIPE;
	v->a[45270] = anon_sym_LT;
	v->a[45271] = anon_sym_GT;
	v->a[45272] = anon_sym_GT_GT;
	v->a[45273] = anon_sym_LT_AMP;
	v->a[45274] = anon_sym_GT_AMP;
	v->a[45275] = anon_sym_GT_PIPE;
	v->a[45276] = anon_sym_LT_GT;
	v->a[45277] = anon_sym_LT_LT;
	v->a[45278] = anon_sym_LT_LT_DASH;
	v->a[45279] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2264(v);
}

void	small_parse_table_2264(t_small_parse_table_array *v)
{
	v->a[45280] = anon_sym_DOLLAR;
	v->a[45281] = anon_sym_DQUOTE;
	v->a[45282] = sym_raw_string;
	v->a[45283] = sym_number;
	v->a[45284] = anon_sym_DOLLAR_LBRACE;
	v->a[45285] = anon_sym_DOLLAR_LPAREN;
	v->a[45286] = anon_sym_BQUOTE;
	v->a[45287] = sym_word;
	v->a[45288] = 16;
	v->a[45289] = actions(664);
	v->a[45290] = 1;
	v->a[45291] = sym_comment;
	v->a[45292] = actions(1560);
	v->a[45293] = 1;
	v->a[45294] = anon_sym_LPAREN;
	v->a[45295] = actions(1562);
	v->a[45296] = 1;
	v->a[45297] = anon_sym_BANG;
	v->a[45298] = actions(1570);
	v->a[45299] = 1;
	small_parse_table_2265(v);
}

/* EOF small_parse_table_452.c */
