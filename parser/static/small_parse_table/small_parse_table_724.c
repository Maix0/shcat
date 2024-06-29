/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_724.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3620(t_small_parse_table_array *v)
{
	v->a[72400] = state(1304);
	v->a[72401] = 1;
	v->a[72402] = aux_sym_pipeline_repeat1;
	v->a[72403] = actions(2186);
	v->a[72404] = 3;
	v->a[72405] = sym_file_descriptor;
	v->a[72406] = ts_builtin_sym_end;
	v->a[72407] = aux_sym_heredoc_redirect_token1;
	v->a[72408] = actions(2191);
	v->a[72409] = 17;
	v->a[72410] = anon_sym_SEMI_SEMI;
	v->a[72411] = anon_sym_AMP_AMP;
	v->a[72412] = anon_sym_PIPE_PIPE;
	v->a[72413] = anon_sym_LT;
	v->a[72414] = anon_sym_GT;
	v->a[72415] = anon_sym_GT_GT;
	v->a[72416] = anon_sym_AMP_GT;
	v->a[72417] = anon_sym_AMP_GT_GT;
	v->a[72418] = anon_sym_LT_AMP;
	v->a[72419] = anon_sym_GT_AMP;
	small_parse_table_3621(v);
}

void	small_parse_table_3621(t_small_parse_table_array *v)
{
	v->a[72420] = anon_sym_GT_PIPE;
	v->a[72421] = anon_sym_LT_AMP_DASH;
	v->a[72422] = anon_sym_GT_AMP_DASH;
	v->a[72423] = anon_sym_LT_LT;
	v->a[72424] = anon_sym_LT_LT_DASH;
	v->a[72425] = anon_sym_AMP;
	v->a[72426] = anon_sym_SEMI;
	v->a[72427] = 3;
	v->a[72428] = actions(3);
	v->a[72429] = 1;
	v->a[72430] = sym_comment;
	v->a[72431] = actions(1094);
	v->a[72432] = 3;
	v->a[72433] = sym_file_descriptor;
	v->a[72434] = sym_variable_name;
	v->a[72435] = aux_sym_heredoc_redirect_token1;
	v->a[72436] = actions(1090);
	v->a[72437] = 19;
	v->a[72438] = anon_sym_esac;
	v->a[72439] = anon_sym_PIPE;
	small_parse_table_3622(v);
}

void	small_parse_table_3622(t_small_parse_table_array *v)
{
	v->a[72440] = anon_sym_SEMI_SEMI;
	v->a[72441] = anon_sym_AMP_AMP;
	v->a[72442] = anon_sym_PIPE_PIPE;
	v->a[72443] = anon_sym_LT;
	v->a[72444] = anon_sym_GT;
	v->a[72445] = anon_sym_GT_GT;
	v->a[72446] = anon_sym_AMP_GT;
	v->a[72447] = anon_sym_AMP_GT_GT;
	v->a[72448] = anon_sym_LT_AMP;
	v->a[72449] = anon_sym_GT_AMP;
	v->a[72450] = anon_sym_GT_PIPE;
	v->a[72451] = anon_sym_LT_AMP_DASH;
	v->a[72452] = anon_sym_GT_AMP_DASH;
	v->a[72453] = anon_sym_LT_LT;
	v->a[72454] = anon_sym_LT_LT_DASH;
	v->a[72455] = anon_sym_AMP;
	v->a[72456] = anon_sym_SEMI;
	v->a[72457] = 16;
	v->a[72458] = actions(3);
	v->a[72459] = 1;
	small_parse_table_3623(v);
}

void	small_parse_table_3623(t_small_parse_table_array *v)
{
	v->a[72460] = sym_comment;
	v->a[72461] = actions(1879);
	v->a[72462] = 1;
	v->a[72463] = anon_sym_LPAREN;
	v->a[72464] = actions(1883);
	v->a[72465] = 1;
	v->a[72466] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72467] = actions(1885);
	v->a[72468] = 1;
	v->a[72469] = anon_sym_DOLLAR;
	v->a[72470] = actions(1887);
	v->a[72471] = 1;
	v->a[72472] = anon_sym_DQUOTE;
	v->a[72473] = actions(1889);
	v->a[72474] = 1;
	v->a[72475] = anon_sym_DOLLAR_LBRACE;
	v->a[72476] = actions(1891);
	v->a[72477] = 1;
	v->a[72478] = anon_sym_DOLLAR_LPAREN;
	v->a[72479] = actions(1893);
	small_parse_table_3624(v);
}

void	small_parse_table_3624(t_small_parse_table_array *v)
{
	v->a[72480] = 1;
	v->a[72481] = anon_sym_BQUOTE;
	v->a[72482] = actions(1895);
	v->a[72483] = 1;
	v->a[72484] = sym_extglob_pattern;
	v->a[72485] = actions(2460);
	v->a[72486] = 1;
	v->a[72487] = anon_sym_esac;
	v->a[72488] = state(1354);
	v->a[72489] = 1;
	v->a[72490] = aux_sym_case_statement_repeat1;
	v->a[72491] = state(1923);
	v->a[72492] = 1;
	v->a[72493] = sym_case_item;
	v->a[72494] = state(2219);
	v->a[72495] = 1;
	v->a[72496] = sym__case_item_last;
	v->a[72497] = state(2078);
	v->a[72498] = 2;
	v->a[72499] = sym_concatenation;
	small_parse_table_3625(v);
}

/* EOF small_parse_table_724.c */
