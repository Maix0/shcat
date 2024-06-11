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
	v->a[99700] = state(1335);
	v->a[99701] = 2;
	v->a[99702] = sym__heredoc_body;
	v->a[99703] = sym__simple_heredoc_body;
	v->a[99704] = 5;
	v->a[99705] = actions(1094);
	v->a[99706] = 1;
	v->a[99707] = sym_comment;
	v->a[99708] = actions(4464);
	v->a[99709] = 1;
	v->a[99710] = sym__heredoc_body_beginning;
	v->a[99711] = actions(4466);
	v->a[99712] = 1;
	v->a[99713] = sym_simple_heredoc_body;
	v->a[99714] = state(2281);
	v->a[99715] = 1;
	v->a[99716] = sym_heredoc_body;
	v->a[99717] = state(1786);
	v->a[99718] = 2;
	v->a[99719] = sym__heredoc_body;
	small_parse_table_4986(v);
}

void	small_parse_table_4986(t_small_parse_table_array *v)
{
	v->a[99720] = sym__simple_heredoc_body;
	v->a[99721] = 6;
	v->a[99722] = actions(1094);
	v->a[99723] = 1;
	v->a[99724] = sym_comment;
	v->a[99725] = actions(4464);
	v->a[99726] = 1;
	v->a[99727] = sym__heredoc_body_beginning;
	v->a[99728] = actions(4470);
	v->a[99729] = 1;
	v->a[99730] = sym_simple_heredoc_body;
	v->a[99731] = state(1370);
	v->a[99732] = 1;
	v->a[99733] = sym__simple_heredoc_body;
	v->a[99734] = state(1382);
	v->a[99735] = 1;
	v->a[99736] = sym__heredoc_body;
	v->a[99737] = state(2390);
	v->a[99738] = 1;
	v->a[99739] = sym_heredoc_body;
	small_parse_table_4987(v);
}

void	small_parse_table_4987(t_small_parse_table_array *v)
{
	v->a[99740] = 5;
	v->a[99741] = actions(1094);
	v->a[99742] = 1;
	v->a[99743] = sym_comment;
	v->a[99744] = actions(4462);
	v->a[99745] = 1;
	v->a[99746] = sym_simple_heredoc_body;
	v->a[99747] = actions(4464);
	v->a[99748] = 1;
	v->a[99749] = sym__heredoc_body_beginning;
	v->a[99750] = state(2439);
	v->a[99751] = 1;
	v->a[99752] = sym_heredoc_body;
	v->a[99753] = state(1483);
	v->a[99754] = 2;
	v->a[99755] = sym__heredoc_body;
	v->a[99756] = sym__simple_heredoc_body;
	v->a[99757] = 4;
	v->a[99758] = actions(3);
	v->a[99759] = 1;
	small_parse_table_4988(v);
}

void	small_parse_table_4988(t_small_parse_table_array *v)
{
	v->a[99760] = sym_comment;
	v->a[99761] = actions(4414);
	v->a[99762] = 1;
	v->a[99763] = anon_sym_in;
	v->a[99764] = actions(4418);
	v->a[99765] = 1;
	v->a[99766] = aux_sym_heredoc_redirect_token1;
	v->a[99767] = actions(4416);
	v->a[99768] = 3;
	v->a[99769] = anon_sym_SEMI_SEMI;
	v->a[99770] = anon_sym_AMP;
	v->a[99771] = anon_sym_SEMI;
	v->a[99772] = 5;
	v->a[99773] = actions(1094);
	v->a[99774] = 1;
	v->a[99775] = sym_comment;
	v->a[99776] = actions(4462);
	v->a[99777] = 1;
	v->a[99778] = sym_simple_heredoc_body;
	v->a[99779] = actions(4464);
	small_parse_table_4989(v);
}

void	small_parse_table_4989(t_small_parse_table_array *v)
{
	v->a[99780] = 1;
	v->a[99781] = sym__heredoc_body_beginning;
	v->a[99782] = state(2439);
	v->a[99783] = 1;
	v->a[99784] = sym_heredoc_body;
	v->a[99785] = state(1465);
	v->a[99786] = 2;
	v->a[99787] = sym__heredoc_body;
	v->a[99788] = sym__simple_heredoc_body;
	v->a[99789] = 6;
	v->a[99790] = actions(1094);
	v->a[99791] = 1;
	v->a[99792] = sym_comment;
	v->a[99793] = actions(4462);
	v->a[99794] = 1;
	v->a[99795] = sym_simple_heredoc_body;
	v->a[99796] = actions(4464);
	v->a[99797] = 1;
	v->a[99798] = sym__heredoc_body_beginning;
	v->a[99799] = state(1531);
	small_parse_table_4990(v);
}

/* EOF small_parse_table_997.c */
