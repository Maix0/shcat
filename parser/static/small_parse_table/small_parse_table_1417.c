/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1417.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7085(t_small_parse_table_array *v)
{
	v->a[141700] = 1;
	v->a[141701] = aux_sym__expansion_regex_token1;
	v->a[141702] = actions(8444);
	v->a[141703] = 1;
	v->a[141704] = sym_regex;
	v->a[141705] = state(3227);
	v->a[141706] = 2;
	v->a[141707] = sym_string;
	v->a[141708] = aux_sym__expansion_regex_repeat1;
	v->a[141709] = 8;
	v->a[141710] = actions(3);
	v->a[141711] = 1;
	v->a[141712] = sym_comment;
	v->a[141713] = actions(8434);
	v->a[141714] = 1;
	v->a[141715] = anon_sym_RPAREN;
	v->a[141716] = actions(8436);
	v->a[141717] = 1;
	v->a[141718] = anon_sym_DQUOTE;
	v->a[141719] = actions(8442);
	small_parse_table_7086(v);
}

void	small_parse_table_7086(t_small_parse_table_array *v)
{
	v->a[141720] = 1;
	v->a[141721] = aux_sym__expansion_regex_token1;
	v->a[141722] = actions(8446);
	v->a[141723] = 1;
	v->a[141724] = sym_raw_string;
	v->a[141725] = actions(8448);
	v->a[141726] = 1;
	v->a[141727] = anon_sym_RBRACE3;
	v->a[141728] = actions(8450);
	v->a[141729] = 1;
	v->a[141730] = sym_regex;
	v->a[141731] = state(3234);
	v->a[141732] = 2;
	v->a[141733] = sym_string;
	v->a[141734] = aux_sym__expansion_regex_repeat1;
	v->a[141735] = 7;
	v->a[141736] = actions(3);
	v->a[141737] = 1;
	v->a[141738] = sym_comment;
	v->a[141739] = actions(8385);
	small_parse_table_7087(v);
}

void	small_parse_table_7087(t_small_parse_table_array *v)
{
	v->a[141740] = 1;
	v->a[141741] = aux_sym_concatenation_token1;
	v->a[141742] = actions(8387);
	v->a[141743] = 1;
	v->a[141744] = sym__concat;
	v->a[141745] = actions(8452);
	v->a[141746] = 1;
	v->a[141747] = anon_sym_in;
	v->a[141748] = actions(8456);
	v->a[141749] = 1;
	v->a[141750] = aux_sym_heredoc_redirect_token1;
	v->a[141751] = state(3228);
	v->a[141752] = 1;
	v->a[141753] = aux_sym_concatenation_repeat1;
	v->a[141754] = actions(8454);
	v->a[141755] = 3;
	v->a[141756] = anon_sym_SEMI_SEMI;
	v->a[141757] = anon_sym_AMP;
	v->a[141758] = anon_sym_SEMI;
	v->a[141759] = 6;
	small_parse_table_7088(v);
}

void	small_parse_table_7088(t_small_parse_table_array *v)
{
	v->a[141760] = actions(3);
	v->a[141761] = 1;
	v->a[141762] = sym_comment;
	v->a[141763] = actions(2696);
	v->a[141764] = 1;
	v->a[141765] = aux_sym_heredoc_redirect_token1;
	v->a[141766] = actions(8385);
	v->a[141767] = 1;
	v->a[141768] = aux_sym_concatenation_token1;
	v->a[141769] = actions(8458);
	v->a[141770] = 1;
	v->a[141771] = sym__concat;
	v->a[141772] = state(3231);
	v->a[141773] = 1;
	v->a[141774] = aux_sym_concatenation_repeat1;
	v->a[141775] = actions(2694);
	v->a[141776] = 4;
	v->a[141777] = anon_sym_in;
	v->a[141778] = anon_sym_SEMI_SEMI;
	v->a[141779] = anon_sym_AMP;
	small_parse_table_7089(v);
}

void	small_parse_table_7089(t_small_parse_table_array *v)
{
	v->a[141780] = anon_sym_SEMI;
	v->a[141781] = 3;
	v->a[141782] = actions(57);
	v->a[141783] = 1;
	v->a[141784] = sym_comment;
	v->a[141785] = actions(2776);
	v->a[141786] = 1;
	v->a[141787] = anon_sym_DOLLAR;
	v->a[141788] = actions(2778);
	v->a[141789] = 6;
	v->a[141790] = sym_heredoc_content;
	v->a[141791] = sym_heredoc_end;
	v->a[141792] = anon_sym_DOLLAR_LBRACE;
	v->a[141793] = anon_sym_DOLLAR_LPAREN;
	v->a[141794] = anon_sym_BQUOTE;
	v->a[141795] = anon_sym_DOLLAR_BQUOTE;
	v->a[141796] = 3;
	v->a[141797] = actions(3);
	v->a[141798] = 1;
	v->a[141799] = sym_comment;
	small_parse_table_7090(v);
}

/* EOF small_parse_table_1417.c */
