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
	v->a[25500] = anon_sym_LT_LT_DASH;
	v->a[25501] = actions(936);
	v->a[25502] = 2;
	v->a[25503] = anon_sym_AMP_AMP;
	v->a[25504] = anon_sym_PIPE_PIPE;
	v->a[25505] = state(1038);
	v->a[25506] = 2;
	v->a[25507] = sym_variable_assignment;
	v->a[25508] = aux_sym__variable_assignments_repeat1;
	v->a[25509] = state(1034);
	v->a[25510] = 3;
	v->a[25511] = sym_file_redirect;
	v->a[25512] = sym_heredoc_redirect;
	v->a[25513] = aux_sym_redirected_statement_repeat1;
	v->a[25514] = actions(696);
	v->a[25515] = 4;
	v->a[25516] = anon_sym_SEMI_SEMI;
	v->a[25517] = aux_sym_heredoc_redirect_token1;
	v->a[25518] = anon_sym_AMP;
	v->a[25519] = anon_sym_SEMI;
	small_parse_table_1276(v);
}

void	small_parse_table_1276(t_small_parse_table_array *v)
{
	v->a[25520] = actions(690);
	v->a[25521] = 15;
	v->a[25522] = anon_sym_LT;
	v->a[25523] = anon_sym_GT;
	v->a[25524] = anon_sym_GT_GT;
	v->a[25525] = anon_sym_LT_AMP;
	v->a[25526] = anon_sym_GT_AMP;
	v->a[25527] = anon_sym_GT_PIPE;
	v->a[25528] = anon_sym_LT_GT;
	v->a[25529] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25530] = anon_sym_DOLLAR;
	v->a[25531] = anon_sym_DQUOTE;
	v->a[25532] = sym_raw_string;
	v->a[25533] = sym_number;
	v->a[25534] = anon_sym_DOLLAR_LBRACE;
	v->a[25535] = anon_sym_DOLLAR_LPAREN;
	v->a[25536] = sym_word;
	v->a[25537] = 17;
	v->a[25538] = actions(668);
	v->a[25539] = 1;
	small_parse_table_1277(v);
}

void	small_parse_table_1277(t_small_parse_table_array *v)
{
	v->a[25540] = anon_sym_AMP;
	v->a[25541] = actions(680);
	v->a[25542] = 1;
	v->a[25543] = sym_comment;
	v->a[25544] = actions(730);
	v->a[25545] = 1;
	v->a[25546] = anon_sym_CARET;
	v->a[25547] = actions(732);
	v->a[25548] = 1;
	v->a[25549] = anon_sym_PIPE;
	v->a[25550] = actions(734);
	v->a[25551] = 1;
	v->a[25552] = anon_sym_AMP_AMP;
	v->a[25553] = actions(736);
	v->a[25554] = 1;
	v->a[25555] = anon_sym_PIPE_PIPE;
	v->a[25556] = actions(738);
	v->a[25557] = 1;
	v->a[25558] = anon_sym_QMARK;
	v->a[25559] = actions(740);
	small_parse_table_1278(v);
}

void	small_parse_table_1278(t_small_parse_table_array *v)
{
	v->a[25560] = 1;
	v->a[25561] = anon_sym_EQ;
	v->a[25562] = actions(961);
	v->a[25563] = 1;
	v->a[25564] = anon_sym_RPAREN_RPAREN;
	v->a[25565] = actions(664);
	v->a[25566] = 2;
	v->a[25567] = anon_sym_LT;
	v->a[25568] = anon_sym_GT;
	v->a[25569] = actions(666);
	v->a[25570] = 2;
	v->a[25571] = anon_sym_GT_GT;
	v->a[25572] = anon_sym_LT_LT;
	v->a[25573] = actions(670);
	v->a[25574] = 2;
	v->a[25575] = anon_sym_EQ_EQ;
	v->a[25576] = anon_sym_BANG_EQ;
	v->a[25577] = actions(672);
	v->a[25578] = 2;
	v->a[25579] = anon_sym_LT_EQ;
	small_parse_table_1279(v);
}

void	small_parse_table_1279(t_small_parse_table_array *v)
{
	v->a[25580] = anon_sym_GT_EQ;
	v->a[25581] = actions(674);
	v->a[25582] = 2;
	v->a[25583] = anon_sym_PLUS;
	v->a[25584] = anon_sym_DASH;
	v->a[25585] = actions(678);
	v->a[25586] = 2;
	v->a[25587] = anon_sym_PLUS_PLUS2;
	v->a[25588] = anon_sym_DASH_DASH2;
	v->a[25589] = actions(676);
	v->a[25590] = 3;
	v->a[25591] = anon_sym_STAR;
	v->a[25592] = anon_sym_SLASH;
	v->a[25593] = anon_sym_PERCENT;
	v->a[25594] = actions(912);
	v->a[25595] = 10;
	v->a[25596] = anon_sym_PLUS_EQ;
	v->a[25597] = anon_sym_DASH_EQ;
	v->a[25598] = anon_sym_STAR_EQ;
	v->a[25599] = anon_sym_SLASH_EQ;
	small_parse_table_1280(v);
}

/* EOF small_parse_table_255.c */
