/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2765.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13825(t_small_parse_table_array *v)
{
	v->a[276500] = sym__special_character;
	v->a[276501] = anon_sym_DQUOTE;
	v->a[276502] = sym_raw_string;
	v->a[276503] = sym_ansi_c_string;
	v->a[276504] = anon_sym_DOLLAR_LBRACE;
	v->a[276505] = anon_sym_DOLLAR_BQUOTE;
	v->a[276506] = anon_sym_LT_LPAREN;
	v->a[276507] = anon_sym_GT_LPAREN;
	v->a[276508] = 4;
	v->a[276509] = actions(71);
	v->a[276510] = 1;
	v->a[276511] = sym_comment;
	v->a[276512] = actions(12397);
	v->a[276513] = 1;
	v->a[276514] = anon_sym_esac;
	v->a[276515] = actions(12393);
	v->a[276516] = 6;
	v->a[276517] = anon_sym_LPAREN;
	v->a[276518] = anon_sym_DOLLAR;
	v->a[276519] = aux_sym_number_token1;
	small_parse_table_13826(v);
}

void	small_parse_table_13826(t_small_parse_table_array *v)
{
	v->a[276520] = aux_sym_number_token2;
	v->a[276521] = anon_sym_DOLLAR_LPAREN;
	v->a[276522] = sym_word;
	v->a[276523] = actions(12395);
	v->a[276524] = 15;
	v->a[276525] = sym_test_operator;
	v->a[276526] = sym_extglob_pattern;
	v->a[276527] = sym__brace_start;
	v->a[276528] = anon_sym_LPAREN_LPAREN;
	v->a[276529] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[276530] = anon_sym_DOLLAR_LBRACK;
	v->a[276531] = sym__special_character;
	v->a[276532] = anon_sym_DQUOTE;
	v->a[276533] = sym_raw_string;
	v->a[276534] = sym_ansi_c_string;
	v->a[276535] = anon_sym_DOLLAR_LBRACE;
	v->a[276536] = anon_sym_BQUOTE;
	v->a[276537] = anon_sym_DOLLAR_BQUOTE;
	v->a[276538] = anon_sym_LT_LPAREN;
	v->a[276539] = anon_sym_GT_LPAREN;
	small_parse_table_13827(v);
}

void	small_parse_table_13827(t_small_parse_table_array *v)
{
	v->a[276540] = 9;
	v->a[276541] = actions(3);
	v->a[276542] = 1;
	v->a[276543] = sym_comment;
	v->a[276544] = actions(5387);
	v->a[276545] = 1;
	v->a[276546] = aux_sym_heredoc_redirect_token1;
	v->a[276547] = actions(12221);
	v->a[276548] = 1;
	v->a[276549] = sym_file_descriptor;
	v->a[276550] = actions(4692);
	v->a[276551] = 2;
	v->a[276552] = anon_sym_LT_LT;
	v->a[276553] = anon_sym_LT_LT_DASH;
	v->a[276554] = actions(5099);
	v->a[276555] = 2;
	v->a[276556] = anon_sym_PIPE_PIPE;
	v->a[276557] = anon_sym_AMP_AMP;
	v->a[276558] = actions(11556);
	v->a[276559] = 2;
	small_parse_table_13828(v);
}

void	small_parse_table_13828(t_small_parse_table_array *v)
{
	v->a[276560] = anon_sym_LT_AMP_DASH;
	v->a[276561] = anon_sym_GT_AMP_DASH;
	v->a[276562] = actions(5385);
	v->a[276563] = 3;
	v->a[276564] = anon_sym_SEMI;
	v->a[276565] = anon_sym_AMP;
	v->a[276566] = anon_sym_SEMI_SEMI;
	v->a[276567] = state(4986);
	v->a[276568] = 3;
	v->a[276569] = sym_file_redirect;
	v->a[276570] = sym_heredoc_redirect;
	v->a[276571] = aux_sym_redirected_statement_repeat1;
	v->a[276572] = actions(11554);
	v->a[276573] = 8;
	v->a[276574] = anon_sym_LT;
	v->a[276575] = anon_sym_GT;
	v->a[276576] = anon_sym_GT_GT;
	v->a[276577] = anon_sym_AMP_GT;
	v->a[276578] = anon_sym_AMP_GT_GT;
	v->a[276579] = anon_sym_LT_AMP;
	small_parse_table_13829(v);
}

void	small_parse_table_13829(t_small_parse_table_array *v)
{
	v->a[276580] = anon_sym_GT_AMP;
	v->a[276581] = anon_sym_GT_PIPE;
	v->a[276582] = 4;
	v->a[276583] = actions(71);
	v->a[276584] = 1;
	v->a[276585] = sym_comment;
	v->a[276586] = actions(12403);
	v->a[276587] = 1;
	v->a[276588] = anon_sym_esac;
	v->a[276589] = actions(12399);
	v->a[276590] = 6;
	v->a[276591] = anon_sym_LPAREN;
	v->a[276592] = anon_sym_DOLLAR;
	v->a[276593] = aux_sym_number_token1;
	v->a[276594] = aux_sym_number_token2;
	v->a[276595] = anon_sym_DOLLAR_LPAREN;
	v->a[276596] = sym_word;
	v->a[276597] = actions(12401);
	v->a[276598] = 15;
	v->a[276599] = sym_test_operator;
	small_parse_table_13830(v);
}

/* EOF small_parse_table_2765.c */
