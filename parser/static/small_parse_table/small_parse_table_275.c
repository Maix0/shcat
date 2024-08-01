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
	v->a[27500] = sym_number;
	v->a[27501] = anon_sym_DOLLAR_LBRACE;
	v->a[27502] = anon_sym_DOLLAR_LPAREN;
	v->a[27503] = anon_sym_BQUOTE;
	v->a[27504] = sym_word;
	v->a[27505] = anon_sym_SEMI;
	v->a[27506] = 3;
	v->a[27507] = actions(3);
	v->a[27508] = 1;
	v->a[27509] = sym_comment;
	v->a[27510] = actions(1116);
	v->a[27511] = 1;
	v->a[27512] = sym__concat;
	v->a[27513] = actions(1114);
	v->a[27514] = 21;
	v->a[27515] = anon_sym_PIPE;
	v->a[27516] = anon_sym_RPAREN;
	v->a[27517] = anon_sym_SEMI_SEMI;
	v->a[27518] = anon_sym_AMP_AMP;
	v->a[27519] = anon_sym_PIPE_PIPE;
	small_parse_table_1376(v);
}

void	small_parse_table_1376(t_small_parse_table_array *v)
{
	v->a[27520] = anon_sym_LT;
	v->a[27521] = anon_sym_GT;
	v->a[27522] = anon_sym_GT_GT;
	v->a[27523] = anon_sym_LT_LT;
	v->a[27524] = aux_sym_heredoc_redirect_token1;
	v->a[27525] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27526] = aux_sym_concatenation_token1;
	v->a[27527] = anon_sym_DOLLAR;
	v->a[27528] = anon_sym_DQUOTE;
	v->a[27529] = sym_raw_string;
	v->a[27530] = sym_number;
	v->a[27531] = anon_sym_DOLLAR_LBRACE;
	v->a[27532] = anon_sym_DOLLAR_LPAREN;
	v->a[27533] = anon_sym_BQUOTE;
	v->a[27534] = sym_word;
	v->a[27535] = anon_sym_SEMI;
	v->a[27536] = 7;
	v->a[27537] = actions(3);
	v->a[27538] = 1;
	v->a[27539] = sym_comment;
	small_parse_table_1377(v);
}

void	small_parse_table_1377(t_small_parse_table_array *v)
{
	v->a[27540] = actions(580);
	v->a[27541] = 1;
	v->a[27542] = anon_sym_PIPE;
	v->a[27543] = actions(1176);
	v->a[27544] = 1;
	v->a[27545] = sym_variable_name;
	v->a[27546] = state(1300);
	v->a[27547] = 2;
	v->a[27548] = sym_variable_assignment;
	v->a[27549] = aux_sym__variable_assignments_repeat1;
	v->a[27550] = actions(816);
	v->a[27551] = 3;
	v->a[27552] = anon_sym_AMP_AMP;
	v->a[27553] = anon_sym_PIPE_PIPE;
	v->a[27554] = anon_sym_LT_LT;
	v->a[27555] = state(1319);
	v->a[27556] = 3;
	v->a[27557] = sym_file_redirect;
	v->a[27558] = sym_heredoc_redirect;
	v->a[27559] = aux_sym_redirected_statement_repeat1;
	small_parse_table_1378(v);
}

void	small_parse_table_1378(t_small_parse_table_array *v)
{
	v->a[27560] = actions(576);
	v->a[27561] = 12;
	v->a[27562] = anon_sym_LT;
	v->a[27563] = anon_sym_GT;
	v->a[27564] = anon_sym_GT_GT;
	v->a[27565] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27566] = anon_sym_DOLLAR;
	v->a[27567] = anon_sym_DQUOTE;
	v->a[27568] = sym_raw_string;
	v->a[27569] = sym_number;
	v->a[27570] = anon_sym_DOLLAR_LBRACE;
	v->a[27571] = anon_sym_DOLLAR_LPAREN;
	v->a[27572] = anon_sym_BQUOTE;
	v->a[27573] = sym_word;
	v->a[27574] = 3;
	v->a[27575] = actions(3);
	v->a[27576] = 1;
	v->a[27577] = sym_comment;
	v->a[27578] = actions(1046);
	v->a[27579] = 1;
	small_parse_table_1379(v);
}

void	small_parse_table_1379(t_small_parse_table_array *v)
{
	v->a[27580] = sym__concat;
	v->a[27581] = actions(1048);
	v->a[27582] = 21;
	v->a[27583] = anon_sym_esac;
	v->a[27584] = anon_sym_PIPE;
	v->a[27585] = anon_sym_SEMI_SEMI;
	v->a[27586] = anon_sym_AMP_AMP;
	v->a[27587] = anon_sym_PIPE_PIPE;
	v->a[27588] = anon_sym_LT;
	v->a[27589] = anon_sym_GT;
	v->a[27590] = anon_sym_GT_GT;
	v->a[27591] = anon_sym_LT_LT;
	v->a[27592] = aux_sym_heredoc_redirect_token1;
	v->a[27593] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27594] = aux_sym_concatenation_token1;
	v->a[27595] = anon_sym_DOLLAR;
	v->a[27596] = anon_sym_DQUOTE;
	v->a[27597] = sym_raw_string;
	v->a[27598] = sym_number;
	v->a[27599] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1380(v);
}

/* EOF small_parse_table_275.c */
