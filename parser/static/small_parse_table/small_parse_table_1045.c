/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1045.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5225(t_small_parse_table_array *v)
{
	v->a[104500] = actions(5993);
	v->a[104501] = 1;
	v->a[104502] = anon_sym_DQUOTE;
	v->a[104503] = actions(5995);
	v->a[104504] = 1;
	v->a[104505] = anon_sym_DOLLAR_LBRACE;
	v->a[104506] = actions(5997);
	v->a[104507] = 1;
	v->a[104508] = anon_sym_BQUOTE;
	v->a[104509] = actions(5999);
	v->a[104510] = 1;
	v->a[104511] = anon_sym_DOLLAR_BQUOTE;
	v->a[104512] = actions(6001);
	v->a[104513] = 1;
	v->a[104514] = sym__special_character;
	v->a[104515] = state(1270);
	v->a[104516] = 1;
	v->a[104517] = aux_sym__literal_repeat1;
	v->a[104518] = actions(2388);
	v->a[104519] = 2;
	small_parse_table_5226(v);
}

void	small_parse_table_5226(t_small_parse_table_array *v)
{
	v->a[104520] = sym_test_operator;
	v->a[104521] = sym_raw_string;
	v->a[104522] = state(427);
	v->a[104523] = 2;
	v->a[104524] = sym_concatenation;
	v->a[104525] = aux_sym_for_statement_repeat1;
	v->a[104526] = state(1222);
	v->a[104527] = 7;
	v->a[104528] = sym_arithmetic_expansion;
	v->a[104529] = sym_brace_expression;
	v->a[104530] = sym_string;
	v->a[104531] = sym_number;
	v->a[104532] = sym_simple_expansion;
	v->a[104533] = sym_expansion;
	v->a[104534] = sym_command_substitution;
	v->a[104535] = 3;
	v->a[104536] = actions(3);
	v->a[104537] = 1;
	v->a[104538] = sym_comment;
	v->a[104539] = actions(2719);
	small_parse_table_5227(v);
}

void	small_parse_table_5227(t_small_parse_table_array *v)
{
	v->a[104540] = 3;
	v->a[104541] = sym_file_descriptor;
	v->a[104542] = sym_variable_name;
	v->a[104543] = aux_sym_heredoc_redirect_token1;
	v->a[104544] = actions(2717);
	v->a[104545] = 21;
	v->a[104546] = anon_sym_PIPE;
	v->a[104547] = anon_sym_SEMI_SEMI;
	v->a[104548] = anon_sym_SEMI_AMP;
	v->a[104549] = anon_sym_SEMI_SEMI_AMP;
	v->a[104550] = anon_sym_PIPE_AMP;
	v->a[104551] = anon_sym_AMP_AMP;
	v->a[104552] = anon_sym_PIPE_PIPE;
	v->a[104553] = anon_sym_LT;
	v->a[104554] = anon_sym_GT;
	v->a[104555] = anon_sym_GT_GT;
	v->a[104556] = anon_sym_AMP_GT;
	v->a[104557] = anon_sym_AMP_GT_GT;
	v->a[104558] = anon_sym_LT_AMP;
	v->a[104559] = anon_sym_GT_AMP;
	small_parse_table_5228(v);
}

void	small_parse_table_5228(t_small_parse_table_array *v)
{
	v->a[104560] = anon_sym_GT_PIPE;
	v->a[104561] = anon_sym_LT_AMP_DASH;
	v->a[104562] = anon_sym_GT_AMP_DASH;
	v->a[104563] = anon_sym_LT_LT;
	v->a[104564] = anon_sym_LT_LT_DASH;
	v->a[104565] = anon_sym_AMP;
	v->a[104566] = anon_sym_SEMI;
	v->a[104567] = 7;
	v->a[104568] = actions(3);
	v->a[104569] = 1;
	v->a[104570] = sym_comment;
	v->a[104571] = actions(5281);
	v->a[104572] = 1;
	v->a[104573] = aux_sym_heredoc_redirect_token1;
	v->a[104574] = actions(6009);
	v->a[104575] = 1;
	v->a[104576] = sym_file_descriptor;
	v->a[104577] = actions(6006);
	v->a[104578] = 2;
	v->a[104579] = anon_sym_LT_AMP_DASH;
	small_parse_table_5229(v);
}

void	small_parse_table_5229(t_small_parse_table_array *v)
{
	v->a[104580] = anon_sym_GT_AMP_DASH;
	v->a[104581] = state(2182);
	v->a[104582] = 2;
	v->a[104583] = sym_file_redirect;
	v->a[104584] = aux_sym_redirected_statement_repeat2;
	v->a[104585] = actions(6003);
	v->a[104586] = 8;
	v->a[104587] = anon_sym_LT;
	v->a[104588] = anon_sym_GT;
	v->a[104589] = anon_sym_GT_GT;
	v->a[104590] = anon_sym_AMP_GT;
	v->a[104591] = anon_sym_AMP_GT_GT;
	v->a[104592] = anon_sym_LT_AMP;
	v->a[104593] = anon_sym_GT_AMP;
	v->a[104594] = anon_sym_GT_PIPE;
	v->a[104595] = actions(5273);
	v->a[104596] = 10;
	v->a[104597] = anon_sym_PIPE;
	v->a[104598] = anon_sym_SEMI_SEMI;
	v->a[104599] = anon_sym_PIPE_AMP;
	small_parse_table_5230(v);
}

/* EOF small_parse_table_1045.c */
