/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_255.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1275(t_small_parse_table_array *v)
{
	v->a[25500] = state(1046);
	v->a[25501] = 3;
	v->a[25502] = sym_file_redirect;
	v->a[25503] = sym_heredoc_redirect;
	v->a[25504] = aux_sym_redirected_statement_repeat1;
	v->a[25505] = actions(780);
	v->a[25506] = 16;
	v->a[25507] = anon_sym_LT;
	v->a[25508] = anon_sym_GT;
	v->a[25509] = anon_sym_GT_GT;
	v->a[25510] = anon_sym_LT_AMP;
	v->a[25511] = anon_sym_GT_AMP;
	v->a[25512] = anon_sym_GT_PIPE;
	v->a[25513] = anon_sym_LT_GT;
	v->a[25514] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25515] = anon_sym_DOLLAR;
	v->a[25516] = anon_sym_DQUOTE;
	v->a[25517] = sym_raw_string;
	v->a[25518] = sym_number;
	v->a[25519] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1276(v);
}

void	small_parse_table_1276(t_small_parse_table_array *v)
{
	v->a[25520] = anon_sym_DOLLAR_LPAREN;
	v->a[25521] = anon_sym_BQUOTE;
	v->a[25522] = sym_word;
	v->a[25523] = 3;
	v->a[25524] = actions(501);
	v->a[25525] = 1;
	v->a[25526] = sym_comment;
	v->a[25527] = actions(521);
	v->a[25528] = 13;
	v->a[25529] = anon_sym_PIPE;
	v->a[25530] = anon_sym_EQ;
	v->a[25531] = anon_sym_LT;
	v->a[25532] = anon_sym_GT;
	v->a[25533] = anon_sym_GT_GT;
	v->a[25534] = anon_sym_LT_LT;
	v->a[25535] = anon_sym_CARET;
	v->a[25536] = anon_sym_AMP;
	v->a[25537] = anon_sym_PLUS;
	v->a[25538] = anon_sym_DASH;
	v->a[25539] = anon_sym_STAR;
	small_parse_table_1277(v);
}

void	small_parse_table_1277(t_small_parse_table_array *v)
{
	v->a[25540] = anon_sym_SLASH;
	v->a[25541] = anon_sym_PERCENT;
	v->a[25542] = actions(523);
	v->a[25543] = 20;
	v->a[25544] = anon_sym_RPAREN;
	v->a[25545] = anon_sym_AMP_AMP;
	v->a[25546] = anon_sym_PIPE_PIPE;
	v->a[25547] = anon_sym_PLUS_EQ;
	v->a[25548] = anon_sym_DASH_EQ;
	v->a[25549] = anon_sym_STAR_EQ;
	v->a[25550] = anon_sym_SLASH_EQ;
	v->a[25551] = anon_sym_PERCENT_EQ;
	v->a[25552] = anon_sym_LT_LT_EQ;
	v->a[25553] = anon_sym_GT_GT_EQ;
	v->a[25554] = anon_sym_AMP_EQ;
	v->a[25555] = anon_sym_CARET_EQ;
	v->a[25556] = anon_sym_PIPE_EQ;
	v->a[25557] = anon_sym_EQ_EQ;
	v->a[25558] = anon_sym_BANG_EQ;
	v->a[25559] = anon_sym_LT_EQ;
	small_parse_table_1278(v);
}

void	small_parse_table_1278(t_small_parse_table_array *v)
{
	v->a[25560] = anon_sym_GT_EQ;
	v->a[25561] = anon_sym_QMARK;
	v->a[25562] = anon_sym_PLUS_PLUS2;
	v->a[25563] = anon_sym_DASH_DASH2;
	v->a[25564] = 17;
	v->a[25565] = actions(501);
	v->a[25566] = 1;
	v->a[25567] = sym_comment;
	v->a[25568] = actions(650);
	v->a[25569] = 1;
	v->a[25570] = anon_sym_PIPE;
	v->a[25571] = actions(652);
	v->a[25572] = 1;
	v->a[25573] = anon_sym_AMP_AMP;
	v->a[25574] = actions(654);
	v->a[25575] = 1;
	v->a[25576] = anon_sym_PIPE_PIPE;
	v->a[25577] = actions(664);
	v->a[25578] = 1;
	v->a[25579] = anon_sym_CARET;
	small_parse_table_1279(v);
}

void	small_parse_table_1279(t_small_parse_table_array *v)
{
	v->a[25580] = actions(666);
	v->a[25581] = 1;
	v->a[25582] = anon_sym_AMP;
	v->a[25583] = actions(721);
	v->a[25584] = 1;
	v->a[25585] = anon_sym_QMARK;
	v->a[25586] = actions(723);
	v->a[25587] = 1;
	v->a[25588] = anon_sym_EQ;
	v->a[25589] = actions(952);
	v->a[25590] = 1;
	v->a[25591] = anon_sym_COLON;
	v->a[25592] = actions(499);
	v->a[25593] = 2;
	v->a[25594] = anon_sym_PLUS_PLUS2;
	v->a[25595] = anon_sym_DASH_DASH2;
	v->a[25596] = actions(658);
	v->a[25597] = 2;
	v->a[25598] = anon_sym_LT;
	v->a[25599] = anon_sym_GT;
	small_parse_table_1280(v);
}

/* EOF small_parse_table_255.c */
