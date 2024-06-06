/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_195.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_975(t_small_parse_table_array *v)
{
	v->a[19500] = anon_sym_DQUOTE;
	v->a[19501] = sym_raw_string;
	v->a[19502] = aux_sym_number_token1;
	v->a[19503] = aux_sym_number_token2;
	v->a[19504] = anon_sym_DOLLAR_LBRACE;
	v->a[19505] = anon_sym_DOLLAR_LPAREN;
	v->a[19506] = anon_sym_BQUOTE;
	v->a[19507] = anon_sym_DOLLAR_BQUOTE;
	v->a[19508] = aux_sym__simple_variable_name_token1;
	v->a[19509] = sym_word;
	v->a[19510] = anon_sym_SEMI;
	v->a[19511] = 6;
	v->a[19512] = actions(3);
	v->a[19513] = 1;
	v->a[19514] = sym_comment;
	v->a[19515] = actions(2822);
	v->a[19516] = 1;
	v->a[19517] = aux_sym_concatenation_token1;
	v->a[19518] = actions(2830);
	v->a[19519] = 1;
	small_parse_table_976(v);
}

void	small_parse_table_976(t_small_parse_table_array *v)
{
	v->a[19520] = sym__concat;
	v->a[19521] = state(512);
	v->a[19522] = 1;
	v->a[19523] = aux_sym_concatenation_repeat1;
	v->a[19524] = actions(1390);
	v->a[19525] = 5;
	v->a[19526] = sym_file_descriptor;
	v->a[19527] = sym_variable_name;
	v->a[19528] = sym_test_operator;
	v->a[19529] = sym__brace_start;
	v->a[19530] = aux_sym_heredoc_redirect_token1;
	v->a[19531] = actions(1388);
	v->a[19532] = 34;
	v->a[19533] = anon_sym_esac;
	v->a[19534] = anon_sym_PIPE;
	v->a[19535] = anon_sym_SEMI_SEMI;
	v->a[19536] = anon_sym_SEMI_AMP;
	v->a[19537] = anon_sym_SEMI_SEMI_AMP;
	v->a[19538] = anon_sym_PIPE_AMP;
	v->a[19539] = anon_sym_AMP_AMP;
	small_parse_table_977(v);
}

void	small_parse_table_977(t_small_parse_table_array *v)
{
	v->a[19540] = anon_sym_PIPE_PIPE;
	v->a[19541] = anon_sym_LT;
	v->a[19542] = anon_sym_GT;
	v->a[19543] = anon_sym_GT_GT;
	v->a[19544] = anon_sym_AMP_GT;
	v->a[19545] = anon_sym_AMP_GT_GT;
	v->a[19546] = anon_sym_LT_AMP;
	v->a[19547] = anon_sym_GT_AMP;
	v->a[19548] = anon_sym_GT_PIPE;
	v->a[19549] = anon_sym_LT_AMP_DASH;
	v->a[19550] = anon_sym_GT_AMP_DASH;
	v->a[19551] = anon_sym_LT_LT;
	v->a[19552] = anon_sym_LT_LT_DASH;
	v->a[19553] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19554] = anon_sym_AMP;
	v->a[19555] = anon_sym_DOLLAR;
	v->a[19556] = sym__special_character;
	v->a[19557] = anon_sym_DQUOTE;
	v->a[19558] = sym_raw_string;
	v->a[19559] = aux_sym_number_token1;
	small_parse_table_978(v);
}

void	small_parse_table_978(t_small_parse_table_array *v)
{
	v->a[19560] = aux_sym_number_token2;
	v->a[19561] = anon_sym_DOLLAR_LBRACE;
	v->a[19562] = anon_sym_DOLLAR_LPAREN;
	v->a[19563] = anon_sym_BQUOTE;
	v->a[19564] = anon_sym_DOLLAR_BQUOTE;
	v->a[19565] = sym_word;
	v->a[19566] = anon_sym_SEMI;
	v->a[19567] = 29;
	v->a[19568] = actions(17);
	v->a[19569] = 1;
	v->a[19570] = anon_sym_LPAREN;
	v->a[19571] = actions(57);
	v->a[19572] = 1;
	v->a[19573] = sym_comment;
	v->a[19574] = actions(87);
	v->a[19575] = 1;
	v->a[19576] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19577] = actions(89);
	v->a[19578] = 1;
	v->a[19579] = anon_sym_DOLLAR;
	small_parse_table_979(v);
}

void	small_parse_table_979(t_small_parse_table_array *v)
{
	v->a[19580] = actions(93);
	v->a[19581] = 1;
	v->a[19582] = anon_sym_DQUOTE;
	v->a[19583] = actions(97);
	v->a[19584] = 1;
	v->a[19585] = aux_sym_number_token1;
	v->a[19586] = actions(99);
	v->a[19587] = 1;
	v->a[19588] = aux_sym_number_token2;
	v->a[19589] = actions(101);
	v->a[19590] = 1;
	v->a[19591] = anon_sym_DOLLAR_LBRACE;
	v->a[19592] = actions(103);
	v->a[19593] = 1;
	v->a[19594] = anon_sym_DOLLAR_LPAREN;
	v->a[19595] = actions(105);
	v->a[19596] = 1;
	v->a[19597] = anon_sym_BQUOTE;
	v->a[19598] = actions(107);
	v->a[19599] = 1;
	small_parse_table_980(v);
}

/* EOF small_parse_table_195.c */
