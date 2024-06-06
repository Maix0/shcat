/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_997.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4985(t_small_parse_table_array *v)
{
	v->a[99700] = anon_sym_LT_LT_DASH;
	v->a[99701] = actions(5602);
	v->a[99702] = 2;
	v->a[99703] = anon_sym_LT_AMP_DASH;
	v->a[99704] = anon_sym_GT_AMP_DASH;
	v->a[99705] = actions(2941);
	v->a[99706] = 3;
	v->a[99707] = anon_sym_SEMI_SEMI;
	v->a[99708] = anon_sym_AMP;
	v->a[99709] = anon_sym_SEMI;
	v->a[99710] = state(2129);
	v->a[99711] = 3;
	v->a[99712] = sym_file_redirect;
	v->a[99713] = sym_heredoc_redirect;
	v->a[99714] = aux_sym_redirected_statement_repeat1;
	v->a[99715] = actions(5600);
	v->a[99716] = 8;
	v->a[99717] = anon_sym_LT;
	v->a[99718] = anon_sym_GT;
	v->a[99719] = anon_sym_GT_GT;
	small_parse_table_4986(v);
}

void	small_parse_table_4986(t_small_parse_table_array *v)
{
	v->a[99720] = anon_sym_AMP_GT;
	v->a[99721] = anon_sym_AMP_GT_GT;
	v->a[99722] = anon_sym_LT_AMP;
	v->a[99723] = anon_sym_GT_AMP;
	v->a[99724] = anon_sym_GT_PIPE;
	v->a[99725] = 6;
	v->a[99726] = actions(3);
	v->a[99727] = 1;
	v->a[99728] = sym_comment;
	v->a[99729] = actions(5267);
	v->a[99730] = 1;
	v->a[99731] = aux_sym_concatenation_token1;
	v->a[99732] = actions(5606);
	v->a[99733] = 1;
	v->a[99734] = sym__concat;
	v->a[99735] = state(1910);
	v->a[99736] = 1;
	v->a[99737] = aux_sym_concatenation_repeat1;
	v->a[99738] = actions(2690);
	v->a[99739] = 2;
	small_parse_table_4987(v);
}

void	small_parse_table_4987(t_small_parse_table_array *v)
{
	v->a[99740] = sym_file_descriptor;
	v->a[99741] = aux_sym_heredoc_redirect_token1;
	v->a[99742] = actions(2688);
	v->a[99743] = 20;
	v->a[99744] = anon_sym_PIPE;
	v->a[99745] = anon_sym_RPAREN;
	v->a[99746] = anon_sym_SEMI_SEMI;
	v->a[99747] = anon_sym_PIPE_AMP;
	v->a[99748] = anon_sym_AMP_AMP;
	v->a[99749] = anon_sym_PIPE_PIPE;
	v->a[99750] = anon_sym_LT;
	v->a[99751] = anon_sym_GT;
	v->a[99752] = anon_sym_GT_GT;
	v->a[99753] = anon_sym_AMP_GT;
	v->a[99754] = anon_sym_AMP_GT_GT;
	v->a[99755] = anon_sym_LT_AMP;
	v->a[99756] = anon_sym_GT_AMP;
	v->a[99757] = anon_sym_GT_PIPE;
	v->a[99758] = anon_sym_LT_AMP_DASH;
	v->a[99759] = anon_sym_GT_AMP_DASH;
	small_parse_table_4988(v);
}

void	small_parse_table_4988(t_small_parse_table_array *v)
{
	v->a[99760] = anon_sym_LT_LT;
	v->a[99761] = anon_sym_LT_LT_DASH;
	v->a[99762] = anon_sym_AMP;
	v->a[99763] = anon_sym_SEMI;
	v->a[99764] = 5;
	v->a[99765] = actions(3);
	v->a[99766] = 1;
	v->a[99767] = sym_comment;
	v->a[99768] = actions(5608);
	v->a[99769] = 1;
	v->a[99770] = sym_variable_name;
	v->a[99771] = actions(5145);
	v->a[99772] = 2;
	v->a[99773] = sym_file_descriptor;
	v->a[99774] = aux_sym_heredoc_redirect_token1;
	v->a[99775] = state(2077);
	v->a[99776] = 2;
	v->a[99777] = sym_variable_assignment;
	v->a[99778] = aux_sym_variable_assignments_repeat1;
	v->a[99779] = actions(5143);
	small_parse_table_4989(v);
}

void	small_parse_table_4989(t_small_parse_table_array *v)
{
	v->a[99780] = 20;
	v->a[99781] = anon_sym_PIPE;
	v->a[99782] = anon_sym_RPAREN;
	v->a[99783] = anon_sym_SEMI_SEMI;
	v->a[99784] = anon_sym_PIPE_AMP;
	v->a[99785] = anon_sym_AMP_AMP;
	v->a[99786] = anon_sym_PIPE_PIPE;
	v->a[99787] = anon_sym_LT;
	v->a[99788] = anon_sym_GT;
	v->a[99789] = anon_sym_GT_GT;
	v->a[99790] = anon_sym_AMP_GT;
	v->a[99791] = anon_sym_AMP_GT_GT;
	v->a[99792] = anon_sym_LT_AMP;
	v->a[99793] = anon_sym_GT_AMP;
	v->a[99794] = anon_sym_GT_PIPE;
	v->a[99795] = anon_sym_LT_AMP_DASH;
	v->a[99796] = anon_sym_GT_AMP_DASH;
	v->a[99797] = anon_sym_LT_LT;
	v->a[99798] = anon_sym_LT_LT_DASH;
	v->a[99799] = anon_sym_AMP;
	small_parse_table_4990(v);
}

/* EOF small_parse_table_997.c */
