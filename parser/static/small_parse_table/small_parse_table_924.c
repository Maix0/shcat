/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_924.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4620(t_small_parse_table_array *v)
{
	v->a[92400] = anon_sym_GT_AMP;
	v->a[92401] = 8;
	v->a[92402] = actions(1074);
	v->a[92403] = 1;
	v->a[92404] = sym_comment;
	v->a[92405] = actions(3848);
	v->a[92406] = 1;
	v->a[92407] = anon_sym_DOLLAR;
	v->a[92408] = actions(3850);
	v->a[92409] = 1;
	v->a[92410] = anon_sym_DOLLAR_LBRACE;
	v->a[92411] = actions(3852);
	v->a[92412] = 1;
	v->a[92413] = anon_sym_DOLLAR_LPAREN;
	v->a[92414] = actions(3854);
	v->a[92415] = 1;
	v->a[92416] = anon_sym_BQUOTE;
	v->a[92417] = actions(3866);
	v->a[92418] = 1;
	v->a[92419] = sym_heredoc_content;
	small_parse_table_4621(v);
}

void	small_parse_table_4621(t_small_parse_table_array *v)
{
	v->a[92420] = actions(3868);
	v->a[92421] = 1;
	v->a[92422] = sym_heredoc_end;
	v->a[92423] = state(1945);
	v->a[92424] = 4;
	v->a[92425] = sym_simple_expansion;
	v->a[92426] = sym_expansion;
	v->a[92427] = sym_command_substitution;
	v->a[92428] = aux_sym_heredoc_body_repeat1;
	v->a[92429] = 8;
	v->a[92430] = actions(1074);
	v->a[92431] = 1;
	v->a[92432] = sym_comment;
	v->a[92433] = actions(3870);
	v->a[92434] = 1;
	v->a[92435] = anon_sym_DOLLAR;
	v->a[92436] = actions(3873);
	v->a[92437] = 1;
	v->a[92438] = anon_sym_DOLLAR_LBRACE;
	v->a[92439] = actions(3876);
	small_parse_table_4622(v);
}

void	small_parse_table_4622(t_small_parse_table_array *v)
{
	v->a[92440] = 1;
	v->a[92441] = anon_sym_DOLLAR_LPAREN;
	v->a[92442] = actions(3879);
	v->a[92443] = 1;
	v->a[92444] = anon_sym_BQUOTE;
	v->a[92445] = actions(3882);
	v->a[92446] = 1;
	v->a[92447] = sym_heredoc_content;
	v->a[92448] = actions(3885);
	v->a[92449] = 1;
	v->a[92450] = sym_heredoc_end;
	v->a[92451] = state(1945);
	v->a[92452] = 4;
	v->a[92453] = sym_simple_expansion;
	v->a[92454] = sym_expansion;
	v->a[92455] = sym_command_substitution;
	v->a[92456] = aux_sym_heredoc_body_repeat1;
	v->a[92457] = 4;
	v->a[92458] = actions(1074);
	v->a[92459] = 1;
	small_parse_table_4623(v);
}

void	small_parse_table_4623(t_small_parse_table_array *v)
{
	v->a[92460] = sym_comment;
	v->a[92461] = actions(3891);
	v->a[92462] = 2;
	v->a[92463] = anon_sym_LT_AMP_DASH;
	v->a[92464] = anon_sym_GT_AMP_DASH;
	v->a[92465] = actions(3889);
	v->a[92466] = 3;
	v->a[92467] = anon_sym_GT_GT;
	v->a[92468] = anon_sym_AMP_GT_GT;
	v->a[92469] = anon_sym_GT_PIPE;
	v->a[92470] = actions(3887);
	v->a[92471] = 5;
	v->a[92472] = anon_sym_LT;
	v->a[92473] = anon_sym_GT;
	v->a[92474] = anon_sym_AMP_GT;
	v->a[92475] = anon_sym_LT_AMP;
	v->a[92476] = anon_sym_GT_AMP;
	v->a[92477] = 4;
	v->a[92478] = actions(1074);
	v->a[92479] = 1;
	small_parse_table_4624(v);
}

void	small_parse_table_4624(t_small_parse_table_array *v)
{
	v->a[92480] = sym_comment;
	v->a[92481] = actions(3897);
	v->a[92482] = 2;
	v->a[92483] = anon_sym_LT_AMP_DASH;
	v->a[92484] = anon_sym_GT_AMP_DASH;
	v->a[92485] = actions(3895);
	v->a[92486] = 3;
	v->a[92487] = anon_sym_GT_GT;
	v->a[92488] = anon_sym_AMP_GT_GT;
	v->a[92489] = anon_sym_GT_PIPE;
	v->a[92490] = actions(3893);
	v->a[92491] = 5;
	v->a[92492] = anon_sym_LT;
	v->a[92493] = anon_sym_GT;
	v->a[92494] = anon_sym_AMP_GT;
	v->a[92495] = anon_sym_LT_AMP;
	v->a[92496] = anon_sym_GT_AMP;
	v->a[92497] = 4;
	v->a[92498] = actions(1074);
	v->a[92499] = 1;
	small_parse_table_4625(v);
}

/* EOF small_parse_table_924.c */
