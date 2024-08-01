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
	v->a[19500] = anon_sym_DOLLAR_LPAREN;
	v->a[19501] = anon_sym_BQUOTE;
	v->a[19502] = sym_word;
	v->a[19503] = 10;
	v->a[19504] = actions(3);
	v->a[19505] = 1;
	v->a[19506] = sym_comment;
	v->a[19507] = actions(580);
	v->a[19508] = 1;
	v->a[19509] = anon_sym_PIPE;
	v->a[19510] = actions(597);
	v->a[19511] = 1;
	v->a[19512] = anon_sym_LT_LT;
	v->a[19513] = actions(771);
	v->a[19514] = 1;
	v->a[19515] = sym_variable_name;
	v->a[19516] = state(480);
	v->a[19517] = 1;
	v->a[19518] = sym_terminator;
	v->a[19519] = actions(769);
	small_parse_table_976(v);
}

void	small_parse_table_976(t_small_parse_table_array *v)
{
	v->a[19520] = 2;
	v->a[19521] = anon_sym_AMP_AMP;
	v->a[19522] = anon_sym_PIPE_PIPE;
	v->a[19523] = state(995);
	v->a[19524] = 2;
	v->a[19525] = sym_variable_assignment;
	v->a[19526] = aux_sym__variable_assignments_repeat1;
	v->a[19527] = actions(812);
	v->a[19528] = 3;
	v->a[19529] = anon_sym_SEMI_SEMI;
	v->a[19530] = aux_sym_heredoc_redirect_token1;
	v->a[19531] = anon_sym_SEMI;
	v->a[19532] = state(1040);
	v->a[19533] = 3;
	v->a[19534] = sym_file_redirect;
	v->a[19535] = sym_heredoc_redirect;
	v->a[19536] = aux_sym_redirected_statement_repeat1;
	v->a[19537] = actions(576);
	v->a[19538] = 12;
	v->a[19539] = anon_sym_LT;
	small_parse_table_977(v);
}

void	small_parse_table_977(t_small_parse_table_array *v)
{
	v->a[19540] = anon_sym_GT;
	v->a[19541] = anon_sym_GT_GT;
	v->a[19542] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19543] = anon_sym_DOLLAR;
	v->a[19544] = anon_sym_DQUOTE;
	v->a[19545] = sym_raw_string;
	v->a[19546] = sym_number;
	v->a[19547] = anon_sym_DOLLAR_LBRACE;
	v->a[19548] = anon_sym_DOLLAR_LPAREN;
	v->a[19549] = anon_sym_BQUOTE;
	v->a[19550] = sym_word;
	v->a[19551] = 18;
	v->a[19552] = actions(3);
	v->a[19553] = 1;
	v->a[19554] = sym_comment;
	v->a[19555] = actions(778);
	v->a[19556] = 1;
	v->a[19557] = anon_sym_LPAREN;
	v->a[19558] = actions(782);
	v->a[19559] = 1;
	small_parse_table_978(v);
}

void	small_parse_table_978(t_small_parse_table_array *v)
{
	v->a[19560] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19561] = actions(784);
	v->a[19562] = 1;
	v->a[19563] = anon_sym_DOLLAR;
	v->a[19564] = actions(786);
	v->a[19565] = 1;
	v->a[19566] = anon_sym_DQUOTE;
	v->a[19567] = actions(788);
	v->a[19568] = 1;
	v->a[19569] = anon_sym_DOLLAR_LBRACE;
	v->a[19570] = actions(790);
	v->a[19571] = 1;
	v->a[19572] = anon_sym_DOLLAR_LPAREN;
	v->a[19573] = actions(792);
	v->a[19574] = 1;
	v->a[19575] = anon_sym_BQUOTE;
	v->a[19576] = actions(794);
	v->a[19577] = 1;
	v->a[19578] = sym_extglob_pattern;
	v->a[19579] = actions(814);
	small_parse_table_979(v);
}

void	small_parse_table_979(t_small_parse_table_array *v)
{
	v->a[19580] = 1;
	v->a[19581] = anon_sym_esac;
	v->a[19582] = state(508);
	v->a[19583] = 1;
	v->a[19584] = sym_terminator;
	v->a[19585] = state(538);
	v->a[19586] = 1;
	v->a[19587] = aux_sym_case_statement_repeat1;
	v->a[19588] = state(1232);
	v->a[19589] = 1;
	v->a[19590] = sym_case_item;
	v->a[19591] = state(1657);
	v->a[19592] = 1;
	v->a[19593] = sym__case_item_last;
	v->a[19594] = state(1538);
	v->a[19595] = 2;
	v->a[19596] = sym_concatenation;
	v->a[19597] = sym__extglob_blob;
	v->a[19598] = actions(774);
	v->a[19599] = 3;
	small_parse_table_980(v);
}

/* EOF small_parse_table_195.c */
