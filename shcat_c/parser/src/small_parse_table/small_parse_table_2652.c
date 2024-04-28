/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2652.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13260(t_small_parse_table_array *v)
{
	v->a[265200] = anon_sym_RBRACE3;
	v->a[265201] = state(3532);
	v->a[265202] = 1;
	v->a[265203] = sym_subscript;
	v->a[265204] = state(6428);
	v->a[265205] = 1;
	v->a[265206] = aux_sym__expansion_body_repeat1;
	v->a[265207] = state(6472);
	v->a[265208] = 1;
	v->a[265209] = sym_command_substitution;
	v->a[265210] = state(6895);
	v->a[265211] = 1;
	v->a[265212] = sym__expansion_body;
	v->a[265213] = actions(11762);
	v->a[265214] = 2;
	v->a[265215] = anon_sym_POUND2;
	v->a[265216] = anon_sym_EQ2;
	v->a[265217] = actions(8050);
	v->a[265218] = 3;
	v->a[265219] = sym__external_expansion_sym_hash;
	small_parse_table_13261(v);
}

void	small_parse_table_13261(t_small_parse_table_array *v)
{
	v->a[265220] = sym__external_expansion_sym_bang;
	v->a[265221] = sym__external_expansion_sym_equal;
	v->a[265222] = actions(11754);
	v->a[265223] = 4;
	v->a[265224] = anon_sym_DASH;
	v->a[265225] = anon_sym_STAR;
	v->a[265226] = anon_sym_QMARK;
	v->a[265227] = anon_sym_AT2;
	v->a[265228] = actions(11756);
	v->a[265229] = 5;
	v->a[265230] = anon_sym_BANG;
	v->a[265231] = anon_sym_DOLLAR;
	v->a[265232] = anon_sym_POUND;
	v->a[265233] = anon_sym_0;
	v->a[265234] = anon_sym__;
	v->a[265235] = 3;
	v->a[265236] = actions(3);
	v->a[265237] = 1;
	v->a[265238] = sym_comment;
	v->a[265239] = actions(5772);
	small_parse_table_13262(v);
}

void	small_parse_table_13262(t_small_parse_table_array *v)
{
	v->a[265240] = 3;
	v->a[265241] = sym_file_descriptor;
	v->a[265242] = sym_variable_name;
	v->a[265243] = aux_sym_heredoc_redirect_token1;
	v->a[265244] = actions(5770);
	v->a[265245] = 22;
	v->a[265246] = anon_sym_SEMI;
	v->a[265247] = anon_sym_PIPE_PIPE;
	v->a[265248] = anon_sym_AMP_AMP;
	v->a[265249] = anon_sym_PIPE;
	v->a[265250] = anon_sym_AMP;
	v->a[265251] = anon_sym_LT;
	v->a[265252] = anon_sym_GT;
	v->a[265253] = anon_sym_LT_LT;
	v->a[265254] = anon_sym_GT_GT;
	v->a[265255] = anon_sym_esac;
	v->a[265256] = anon_sym_SEMI_SEMI;
	v->a[265257] = anon_sym_SEMI_AMP;
	v->a[265258] = anon_sym_SEMI_SEMI_AMP;
	v->a[265259] = anon_sym_PIPE_AMP;
	small_parse_table_13263(v);
}

void	small_parse_table_13263(t_small_parse_table_array *v)
{
	v->a[265260] = anon_sym_AMP_GT;
	v->a[265261] = anon_sym_AMP_GT_GT;
	v->a[265262] = anon_sym_LT_AMP;
	v->a[265263] = anon_sym_GT_AMP;
	v->a[265264] = anon_sym_GT_PIPE;
	v->a[265265] = anon_sym_LT_AMP_DASH;
	v->a[265266] = anon_sym_GT_AMP_DASH;
	v->a[265267] = anon_sym_LT_LT_DASH;
	v->a[265268] = 16;
	v->a[265269] = actions(3);
	v->a[265270] = 1;
	v->a[265271] = sym_comment;
	v->a[265272] = actions(11760);
	v->a[265273] = 1;
	v->a[265274] = anon_sym_BANG2;
	v->a[265275] = actions(11764);
	v->a[265276] = 1;
	v->a[265277] = anon_sym_DOLLAR_LPAREN;
	v->a[265278] = actions(11766);
	v->a[265279] = 1;
	small_parse_table_13264(v);
}

void	small_parse_table_13264(t_small_parse_table_array *v)
{
	v->a[265280] = anon_sym_BQUOTE;
	v->a[265281] = actions(11768);
	v->a[265282] = 1;
	v->a[265283] = anon_sym_DOLLAR_BQUOTE;
	v->a[265284] = actions(11770);
	v->a[265285] = 1;
	v->a[265286] = aux_sym__simple_variable_name_token1;
	v->a[265287] = actions(11772);
	v->a[265288] = 1;
	v->a[265289] = sym_variable_name;
	v->a[265290] = actions(12080);
	v->a[265291] = 1;
	v->a[265292] = anon_sym_RBRACE3;
	v->a[265293] = state(3532);
	v->a[265294] = 1;
	v->a[265295] = sym_subscript;
	v->a[265296] = state(6428);
	v->a[265297] = 1;
	v->a[265298] = aux_sym__expansion_body_repeat1;
	v->a[265299] = state(6472);
	small_parse_table_13265(v);
}

/* EOF small_parse_table_2652.c */
