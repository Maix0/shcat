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
	v->a[25500] = anon_sym_SEMI;
	v->a[25501] = actions(762);
	v->a[25502] = 19;
	v->a[25503] = anon_sym_LT;
	v->a[25504] = anon_sym_GT;
	v->a[25505] = anon_sym_GT_GT;
	v->a[25506] = anon_sym_AMP_GT;
	v->a[25507] = anon_sym_AMP_GT_GT;
	v->a[25508] = anon_sym_LT_AMP;
	v->a[25509] = anon_sym_GT_AMP;
	v->a[25510] = anon_sym_GT_PIPE;
	v->a[25511] = anon_sym_LT_AMP_DASH;
	v->a[25512] = anon_sym_GT_AMP_DASH;
	v->a[25513] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25514] = anon_sym_DOLLAR;
	v->a[25515] = anon_sym_DQUOTE;
	v->a[25516] = sym_raw_string;
	v->a[25517] = sym_number;
	v->a[25518] = anon_sym_DOLLAR_LBRACE;
	v->a[25519] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1276(v);
}

void	small_parse_table_1276(t_small_parse_table_array *v)
{
	v->a[25520] = anon_sym_BQUOTE;
	v->a[25521] = sym_word;
	v->a[25522] = 12;
	v->a[25523] = actions(3);
	v->a[25524] = 1;
	v->a[25525] = sym_comment;
	v->a[25526] = actions(754);
	v->a[25527] = 1;
	v->a[25528] = sym_file_descriptor;
	v->a[25529] = actions(904);
	v->a[25530] = 1;
	v->a[25531] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25532] = actions(906);
	v->a[25533] = 1;
	v->a[25534] = anon_sym_DOLLAR;
	v->a[25535] = actions(908);
	v->a[25536] = 1;
	v->a[25537] = anon_sym_DQUOTE;
	v->a[25538] = actions(910);
	v->a[25539] = 1;
	small_parse_table_1277(v);
}

void	small_parse_table_1277(t_small_parse_table_array *v)
{
	v->a[25540] = anon_sym_DOLLAR_LBRACE;
	v->a[25541] = actions(912);
	v->a[25542] = 1;
	v->a[25543] = anon_sym_DOLLAR_LPAREN;
	v->a[25544] = actions(914);
	v->a[25545] = 1;
	v->a[25546] = anon_sym_BQUOTE;
	v->a[25547] = state(1205);
	v->a[25548] = 1;
	v->a[25549] = sym_concatenation;
	v->a[25550] = actions(902);
	v->a[25551] = 3;
	v->a[25552] = sym_raw_string;
	v->a[25553] = sym_number;
	v->a[25554] = sym_word;
	v->a[25555] = state(1118);
	v->a[25556] = 5;
	v->a[25557] = sym_arithmetic_expansion;
	v->a[25558] = sym_string;
	v->a[25559] = sym_simple_expansion;
	small_parse_table_1278(v);
}

void	small_parse_table_1278(t_small_parse_table_array *v)
{
	v->a[25560] = sym_expansion;
	v->a[25561] = sym_command_substitution;
	v->a[25562] = actions(756);
	v->a[25563] = 20;
	v->a[25564] = anon_sym_PIPE;
	v->a[25565] = anon_sym_RPAREN;
	v->a[25566] = anon_sym_SEMI_SEMI;
	v->a[25567] = anon_sym_AMP_AMP;
	v->a[25568] = anon_sym_PIPE_PIPE;
	v->a[25569] = anon_sym_LT;
	v->a[25570] = anon_sym_GT;
	v->a[25571] = anon_sym_GT_GT;
	v->a[25572] = anon_sym_AMP_GT;
	v->a[25573] = anon_sym_AMP_GT_GT;
	v->a[25574] = anon_sym_LT_AMP;
	v->a[25575] = anon_sym_GT_AMP;
	v->a[25576] = anon_sym_GT_PIPE;
	v->a[25577] = anon_sym_LT_AMP_DASH;
	v->a[25578] = anon_sym_GT_AMP_DASH;
	v->a[25579] = anon_sym_LT_LT;
	small_parse_table_1279(v);
}

void	small_parse_table_1279(t_small_parse_table_array *v)
{
	v->a[25580] = anon_sym_LT_LT_DASH;
	v->a[25581] = aux_sym_heredoc_redirect_token1;
	v->a[25582] = anon_sym_AMP;
	v->a[25583] = anon_sym_SEMI;
	v->a[25584] = 16;
	v->a[25585] = actions(3);
	v->a[25586] = 1;
	v->a[25587] = sym_comment;
	v->a[25588] = actions(17);
	v->a[25589] = 1;
	v->a[25590] = anon_sym_LPAREN;
	v->a[25591] = actions(477);
	v->a[25592] = 1;
	v->a[25593] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25594] = actions(479);
	v->a[25595] = 1;
	v->a[25596] = anon_sym_DOLLAR;
	v->a[25597] = actions(481);
	v->a[25598] = 1;
	v->a[25599] = anon_sym_DQUOTE;
	small_parse_table_1280(v);
}

/* EOF small_parse_table_255.c */
