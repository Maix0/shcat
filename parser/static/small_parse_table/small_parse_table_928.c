/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_928.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4640(t_small_parse_table_array *v)
{
	v->a[92800] = 1;
	v->a[92801] = anon_sym_in;
	v->a[92802] = actions(4137);
	v->a[92803] = 1;
	v->a[92804] = aux_sym_heredoc_redirect_token1;
	v->a[92805] = actions(4135);
	v->a[92806] = 3;
	v->a[92807] = anon_sym_SEMI_SEMI;
	v->a[92808] = anon_sym_AMP;
	v->a[92809] = anon_sym_SEMI;
	v->a[92810] = 5;
	v->a[92811] = actions(1404);
	v->a[92812] = 1;
	v->a[92813] = sym_comment;
	v->a[92814] = actions(4318);
	v->a[92815] = 1;
	v->a[92816] = anon_sym_DOLLAR_LBRACE;
	v->a[92817] = actions(4320);
	v->a[92818] = 1;
	v->a[92819] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4641(v);
}

void	small_parse_table_4641(t_small_parse_table_array *v)
{
	v->a[92820] = actions(4322);
	v->a[92821] = 1;
	v->a[92822] = anon_sym_BQUOTE;
	v->a[92823] = state(794);
	v->a[92824] = 2;
	v->a[92825] = sym_expansion;
	v->a[92826] = sym_command_substitution;
	v->a[92827] = 2;
	v->a[92828] = actions(1404);
	v->a[92829] = 1;
	v->a[92830] = sym_comment;
	v->a[92831] = actions(1247);
	v->a[92832] = 5;
	v->a[92833] = sym__concat;
	v->a[92834] = anon_sym_PIPE;
	v->a[92835] = anon_sym_RPAREN;
	v->a[92836] = anon_sym_RBRACE;
	v->a[92837] = aux_sym_concatenation_token1;
	v->a[92838] = 4;
	v->a[92839] = actions(3);
	small_parse_table_4642(v);
}

void	small_parse_table_4642(t_small_parse_table_array *v)
{
	v->a[92840] = 1;
	v->a[92841] = sym_comment;
	v->a[92842] = actions(4324);
	v->a[92843] = 1;
	v->a[92844] = anon_sym_in;
	v->a[92845] = actions(4328);
	v->a[92846] = 1;
	v->a[92847] = aux_sym_heredoc_redirect_token1;
	v->a[92848] = actions(4326);
	v->a[92849] = 3;
	v->a[92850] = anon_sym_SEMI_SEMI;
	v->a[92851] = anon_sym_AMP;
	v->a[92852] = anon_sym_SEMI;
	v->a[92853] = 5;
	v->a[92854] = actions(1404);
	v->a[92855] = 1;
	v->a[92856] = sym_comment;
	v->a[92857] = actions(4208);
	v->a[92858] = 1;
	v->a[92859] = sym__heredoc_body_beginning;
	small_parse_table_4643(v);
}

void	small_parse_table_4643(t_small_parse_table_array *v)
{
	v->a[92860] = actions(4216);
	v->a[92861] = 1;
	v->a[92862] = sym_simple_heredoc_body;
	v->a[92863] = state(2119);
	v->a[92864] = 1;
	v->a[92865] = sym_heredoc_body;
	v->a[92866] = state(1547);
	v->a[92867] = 2;
	v->a[92868] = sym__heredoc_body;
	v->a[92869] = sym__simple_heredoc_body;
	v->a[92870] = 5;
	v->a[92871] = actions(1404);
	v->a[92872] = 1;
	v->a[92873] = sym_comment;
	v->a[92874] = actions(4330);
	v->a[92875] = 1;
	v->a[92876] = anon_sym_DOLLAR_LBRACE;
	v->a[92877] = actions(4332);
	v->a[92878] = 1;
	v->a[92879] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4644(v);
}

void	small_parse_table_4644(t_small_parse_table_array *v)
{
	v->a[92880] = actions(4334);
	v->a[92881] = 1;
	v->a[92882] = anon_sym_BQUOTE;
	v->a[92883] = state(948);
	v->a[92884] = 2;
	v->a[92885] = sym_expansion;
	v->a[92886] = sym_command_substitution;
	v->a[92887] = 6;
	v->a[92888] = actions(1404);
	v->a[92889] = 1;
	v->a[92890] = sym_comment;
	v->a[92891] = actions(4206);
	v->a[92892] = 1;
	v->a[92893] = sym_simple_heredoc_body;
	v->a[92894] = actions(4208);
	v->a[92895] = 1;
	v->a[92896] = sym__heredoc_body_beginning;
	v->a[92897] = state(1154);
	v->a[92898] = 1;
	v->a[92899] = sym__heredoc_body;
	small_parse_table_4645(v);
}

/* EOF small_parse_table_928.c */
