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
	v->a[25500] = anon_sym_PIPE;
	v->a[25501] = anon_sym_PIPE_AMP;
	v->a[25502] = actions(886);
	v->a[25503] = 2;
	v->a[25504] = anon_sym_AMP_AMP;
	v->a[25505] = anon_sym_PIPE_PIPE;
	v->a[25506] = actions(890);
	v->a[25507] = 2;
	v->a[25508] = anon_sym_LT_AMP_DASH;
	v->a[25509] = anon_sym_GT_AMP_DASH;
	v->a[25510] = state(1610);
	v->a[25511] = 2;
	v->a[25512] = sym_file_redirect;
	v->a[25513] = aux_sym_redirected_statement_repeat2;
	v->a[25514] = actions(882);
	v->a[25515] = 3;
	v->a[25516] = sym_raw_string;
	v->a[25517] = sym_number;
	v->a[25518] = sym_word;
	v->a[25519] = state(1774);
	small_parse_table_1276(v);
}

void	small_parse_table_1276(t_small_parse_table_array *v)
{
	v->a[25520] = 5;
	v->a[25521] = sym_arithmetic_expansion;
	v->a[25522] = sym_string;
	v->a[25523] = sym_simple_expansion;
	v->a[25524] = sym_expansion;
	v->a[25525] = sym_command_substitution;
	v->a[25526] = actions(888);
	v->a[25527] = 6;
	v->a[25528] = anon_sym_LT;
	v->a[25529] = anon_sym_GT;
	v->a[25530] = anon_sym_GT_GT;
	v->a[25531] = anon_sym_LT_AMP;
	v->a[25532] = anon_sym_GT_AMP;
	v->a[25533] = anon_sym_GT_PIPE;
	v->a[25534] = 16;
	v->a[25535] = actions(3);
	v->a[25536] = 1;
	v->a[25537] = sym_comment;
	v->a[25538] = actions(17);
	v->a[25539] = 1;
	small_parse_table_1277(v);
}

void	small_parse_table_1277(t_small_parse_table_array *v)
{
	v->a[25540] = anon_sym_LPAREN;
	v->a[25541] = actions(459);
	v->a[25542] = 1;
	v->a[25543] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25544] = actions(461);
	v->a[25545] = 1;
	v->a[25546] = anon_sym_DOLLAR;
	v->a[25547] = actions(463);
	v->a[25548] = 1;
	v->a[25549] = anon_sym_DQUOTE;
	v->a[25550] = actions(465);
	v->a[25551] = 1;
	v->a[25552] = anon_sym_DOLLAR_LBRACE;
	v->a[25553] = actions(467);
	v->a[25554] = 1;
	v->a[25555] = anon_sym_DOLLAR_LPAREN;
	v->a[25556] = actions(469);
	v->a[25557] = 1;
	v->a[25558] = anon_sym_BQUOTE;
	v->a[25559] = actions(473);
	small_parse_table_1278(v);
}

void	small_parse_table_1278(t_small_parse_table_array *v)
{
	v->a[25560] = 1;
	v->a[25561] = sym__bare_dollar;
	v->a[25562] = actions(493);
	v->a[25563] = 1;
	v->a[25564] = sym_file_descriptor;
	v->a[25565] = state(472);
	v->a[25566] = 1;
	v->a[25567] = aux_sym_command_repeat2;
	v->a[25568] = state(718);
	v->a[25569] = 1;
	v->a[25570] = sym_concatenation;
	v->a[25571] = state(1264);
	v->a[25572] = 1;
	v->a[25573] = sym_subshell;
	v->a[25574] = actions(988);
	v->a[25575] = 3;
	v->a[25576] = sym_raw_string;
	v->a[25577] = sym_number;
	v->a[25578] = sym_word;
	v->a[25579] = state(772);
	small_parse_table_1279(v);
}

void	small_parse_table_1279(t_small_parse_table_array *v)
{
	v->a[25580] = 5;
	v->a[25581] = sym_arithmetic_expansion;
	v->a[25582] = sym_string;
	v->a[25583] = sym_simple_expansion;
	v->a[25584] = sym_expansion;
	v->a[25585] = sym_command_substitution;
	v->a[25586] = actions(491);
	v->a[25587] = 14;
	v->a[25588] = anon_sym_PIPE;
	v->a[25589] = anon_sym_AMP_AMP;
	v->a[25590] = anon_sym_PIPE_PIPE;
	v->a[25591] = anon_sym_LT;
	v->a[25592] = anon_sym_GT;
	v->a[25593] = anon_sym_GT_GT;
	v->a[25594] = anon_sym_LT_AMP;
	v->a[25595] = anon_sym_GT_AMP;
	v->a[25596] = anon_sym_GT_PIPE;
	v->a[25597] = anon_sym_LT_AMP_DASH;
	v->a[25598] = anon_sym_GT_AMP_DASH;
	v->a[25599] = anon_sym_LT_LT;
	small_parse_table_1280(v);
}

/* EOF small_parse_table_255.c */
