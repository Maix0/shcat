/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_467.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2335(t_small_parse_table_array *v)
{
	v->a[46700] = anon_sym_DOLLAR;
	v->a[46701] = anon_sym_DQUOTE;
	v->a[46702] = sym_raw_string;
	v->a[46703] = sym_number;
	v->a[46704] = anon_sym_DOLLAR_LBRACE;
	v->a[46705] = anon_sym_DOLLAR_LPAREN;
	v->a[46706] = anon_sym_BQUOTE;
	v->a[46707] = sym_word;
	v->a[46708] = 10;
	v->a[46709] = actions(3);
	v->a[46710] = 1;
	v->a[46711] = sym_comment;
	v->a[46712] = actions(746);
	v->a[46713] = 1;
	v->a[46714] = anon_sym_PIPE;
	v->a[46715] = actions(842);
	v->a[46716] = 1;
	v->a[46717] = anon_sym_BQUOTE;
	v->a[46718] = actions(1591);
	v->a[46719] = 1;
	small_parse_table_2336(v);
}

void	small_parse_table_2336(t_small_parse_table_array *v)
{
	v->a[46720] = aux_sym_heredoc_redirect_token1;
	v->a[46721] = state(628);
	v->a[46722] = 1;
	v->a[46723] = sym_terminator;
	v->a[46724] = actions(850);
	v->a[46725] = 2;
	v->a[46726] = anon_sym_LT_LT;
	v->a[46727] = anon_sym_LT_LT_DASH;
	v->a[46728] = actions(858);
	v->a[46729] = 2;
	v->a[46730] = anon_sym_SEMI_SEMI;
	v->a[46731] = anon_sym_SEMI;
	v->a[46732] = actions(909);
	v->a[46733] = 2;
	v->a[46734] = anon_sym_AMP_AMP;
	v->a[46735] = anon_sym_PIPE_PIPE;
	v->a[46736] = state(970);
	v->a[46737] = 3;
	v->a[46738] = sym_file_redirect;
	v->a[46739] = sym_heredoc_redirect;
	small_parse_table_2337(v);
}

void	small_parse_table_2337(t_small_parse_table_array *v)
{
	v->a[46740] = aux_sym_redirected_statement_repeat1;
	v->a[46741] = actions(1589);
	v->a[46742] = 7;
	v->a[46743] = anon_sym_LT;
	v->a[46744] = anon_sym_GT;
	v->a[46745] = anon_sym_GT_GT;
	v->a[46746] = anon_sym_LT_AMP;
	v->a[46747] = anon_sym_GT_AMP;
	v->a[46748] = anon_sym_GT_PIPE;
	v->a[46749] = anon_sym_LT_GT;
	v->a[46750] = 10;
	v->a[46751] = actions(3);
	v->a[46752] = 1;
	v->a[46753] = sym_comment;
	v->a[46754] = actions(746);
	v->a[46755] = 1;
	v->a[46756] = anon_sym_PIPE;
	v->a[46757] = actions(752);
	v->a[46758] = 1;
	v->a[46759] = anon_sym_SEMI;
	small_parse_table_2338(v);
}

void	small_parse_table_2338(t_small_parse_table_array *v)
{
	v->a[46760] = actions(1595);
	v->a[46761] = 1;
	v->a[46762] = aux_sym_heredoc_redirect_token1;
	v->a[46763] = state(516);
	v->a[46764] = 1;
	v->a[46765] = sym_terminator;
	v->a[46766] = actions(748);
	v->a[46767] = 2;
	v->a[46768] = anon_sym_AMP_AMP;
	v->a[46769] = anon_sym_PIPE_PIPE;
	v->a[46770] = actions(750);
	v->a[46771] = 2;
	v->a[46772] = anon_sym_LT_LT;
	v->a[46773] = anon_sym_LT_LT_DASH;
	v->a[46774] = actions(842);
	v->a[46775] = 2;
	v->a[46776] = anon_sym_esac;
	v->a[46777] = anon_sym_SEMI_SEMI;
	v->a[46778] = state(931);
	v->a[46779] = 3;
	small_parse_table_2339(v);
}

void	small_parse_table_2339(t_small_parse_table_array *v)
{
	v->a[46780] = sym_file_redirect;
	v->a[46781] = sym_heredoc_redirect;
	v->a[46782] = aux_sym_redirected_statement_repeat1;
	v->a[46783] = actions(1593);
	v->a[46784] = 7;
	v->a[46785] = anon_sym_LT;
	v->a[46786] = anon_sym_GT;
	v->a[46787] = anon_sym_GT_GT;
	v->a[46788] = anon_sym_LT_AMP;
	v->a[46789] = anon_sym_GT_AMP;
	v->a[46790] = anon_sym_GT_PIPE;
	v->a[46791] = anon_sym_LT_GT;
	v->a[46792] = 10;
	v->a[46793] = actions(3);
	v->a[46794] = 1;
	v->a[46795] = sym_comment;
	v->a[46796] = actions(746);
	v->a[46797] = 1;
	v->a[46798] = anon_sym_PIPE;
	v->a[46799] = actions(752);
	small_parse_table_2340(v);
}

/* EOF small_parse_table_467.c */
