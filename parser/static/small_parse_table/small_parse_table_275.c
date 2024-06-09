/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_275.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1375(t_small_parse_table_array *v)
{
	v->a[27500] = actions(1000);
	v->a[27501] = 20;
	v->a[27502] = anon_sym_LT;
	v->a[27503] = anon_sym_GT;
	v->a[27504] = anon_sym_GT_GT;
	v->a[27505] = anon_sym_AMP_GT;
	v->a[27506] = anon_sym_AMP_GT_GT;
	v->a[27507] = anon_sym_LT_AMP;
	v->a[27508] = anon_sym_GT_AMP;
	v->a[27509] = anon_sym_GT_PIPE;
	v->a[27510] = anon_sym_LT_AMP_DASH;
	v->a[27511] = anon_sym_GT_AMP_DASH;
	v->a[27512] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27513] = anon_sym_DOLLAR;
	v->a[27514] = anon_sym_DQUOTE;
	v->a[27515] = sym_raw_string;
	v->a[27516] = aux_sym_number_token1;
	v->a[27517] = aux_sym_number_token2;
	v->a[27518] = anon_sym_DOLLAR_LBRACE;
	v->a[27519] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1376(v);
}

void	small_parse_table_1376(t_small_parse_table_array *v)
{
	v->a[27520] = anon_sym_BQUOTE;
	v->a[27521] = sym_word;
	v->a[27522] = 11;
	v->a[27523] = actions(3);
	v->a[27524] = 1;
	v->a[27525] = sym_comment;
	v->a[27526] = actions(1002);
	v->a[27527] = 1;
	v->a[27528] = anon_sym_PIPE;
	v->a[27529] = actions(1006);
	v->a[27530] = 1;
	v->a[27531] = sym_file_descriptor;
	v->a[27532] = actions(1041);
	v->a[27533] = 1;
	v->a[27534] = sym_variable_name;
	v->a[27535] = actions(1035);
	v->a[27536] = 2;
	v->a[27537] = anon_sym_AMP_AMP;
	v->a[27538] = anon_sym_PIPE_PIPE;
	v->a[27539] = actions(1037);
	small_parse_table_1377(v);
}

void	small_parse_table_1377(t_small_parse_table_array *v)
{
	v->a[27540] = 2;
	v->a[27541] = anon_sym_LT_LT;
	v->a[27542] = anon_sym_LT_LT_DASH;
	v->a[27543] = actions(1073);
	v->a[27544] = 2;
	v->a[27545] = anon_sym_esac;
	v->a[27546] = anon_sym_SEMI_SEMI;
	v->a[27547] = state(1039);
	v->a[27548] = 2;
	v->a[27549] = sym_variable_assignment;
	v->a[27550] = aux_sym_variable_assignments_repeat1;
	v->a[27551] = actions(1075);
	v->a[27552] = 3;
	v->a[27553] = aux_sym_heredoc_redirect_token1;
	v->a[27554] = anon_sym_AMP;
	v->a[27555] = anon_sym_SEMI;
	v->a[27556] = state(1035);
	v->a[27557] = 3;
	v->a[27558] = sym_file_redirect;
	v->a[27559] = sym_heredoc_redirect;
	small_parse_table_1378(v);
}

void	small_parse_table_1378(t_small_parse_table_array *v)
{
	v->a[27560] = aux_sym_redirected_statement_repeat1;
	v->a[27561] = actions(1000);
	v->a[27562] = 20;
	v->a[27563] = anon_sym_LT;
	v->a[27564] = anon_sym_GT;
	v->a[27565] = anon_sym_GT_GT;
	v->a[27566] = anon_sym_AMP_GT;
	v->a[27567] = anon_sym_AMP_GT_GT;
	v->a[27568] = anon_sym_LT_AMP;
	v->a[27569] = anon_sym_GT_AMP;
	v->a[27570] = anon_sym_GT_PIPE;
	v->a[27571] = anon_sym_LT_AMP_DASH;
	v->a[27572] = anon_sym_GT_AMP_DASH;
	v->a[27573] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27574] = anon_sym_DOLLAR;
	v->a[27575] = anon_sym_DQUOTE;
	v->a[27576] = sym_raw_string;
	v->a[27577] = aux_sym_number_token1;
	v->a[27578] = aux_sym_number_token2;
	v->a[27579] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1379(v);
}

void	small_parse_table_1379(t_small_parse_table_array *v)
{
	v->a[27580] = anon_sym_DOLLAR_LPAREN;
	v->a[27581] = anon_sym_BQUOTE;
	v->a[27582] = sym_word;
	v->a[27583] = 11;
	v->a[27584] = actions(3);
	v->a[27585] = 1;
	v->a[27586] = sym_comment;
	v->a[27587] = actions(1002);
	v->a[27588] = 1;
	v->a[27589] = anon_sym_PIPE;
	v->a[27590] = actions(1006);
	v->a[27591] = 1;
	v->a[27592] = sym_file_descriptor;
	v->a[27593] = actions(1008);
	v->a[27594] = 1;
	v->a[27595] = sym_variable_name;
	v->a[27596] = actions(1033);
	v->a[27597] = 1;
	v->a[27598] = anon_sym_RPAREN;
	v->a[27599] = actions(1062);
	small_parse_table_1380(v);
}

/* EOF small_parse_table_275.c */
