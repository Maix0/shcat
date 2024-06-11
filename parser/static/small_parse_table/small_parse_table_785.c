/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_785.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3925(t_small_parse_table_array *v)
{
	v->a[78500] = anon_sym_LT_LT;
	v->a[78501] = anon_sym_LT_LT_DASH;
	v->a[78502] = anon_sym_AMP;
	v->a[78503] = anon_sym_SEMI;
	v->a[78504] = 16;
	v->a[78505] = actions(3);
	v->a[78506] = 1;
	v->a[78507] = sym_comment;
	v->a[78508] = actions(1959);
	v->a[78509] = 1;
	v->a[78510] = anon_sym_LPAREN;
	v->a[78511] = actions(1963);
	v->a[78512] = 1;
	v->a[78513] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78514] = actions(1965);
	v->a[78515] = 1;
	v->a[78516] = anon_sym_DOLLAR;
	v->a[78517] = actions(1967);
	v->a[78518] = 1;
	v->a[78519] = anon_sym_DQUOTE;
	small_parse_table_3926(v);
}

void	small_parse_table_3926(t_small_parse_table_array *v)
{
	v->a[78520] = actions(1969);
	v->a[78521] = 1;
	v->a[78522] = anon_sym_DOLLAR_LBRACE;
	v->a[78523] = actions(1971);
	v->a[78524] = 1;
	v->a[78525] = anon_sym_DOLLAR_LPAREN;
	v->a[78526] = actions(1973);
	v->a[78527] = 1;
	v->a[78528] = anon_sym_BQUOTE;
	v->a[78529] = actions(1975);
	v->a[78530] = 1;
	v->a[78531] = sym_extglob_pattern;
	v->a[78532] = actions(2027);
	v->a[78533] = 1;
	v->a[78534] = anon_sym_esac;
	v->a[78535] = state(1471);
	v->a[78536] = 1;
	v->a[78537] = aux_sym_case_statement_repeat1;
	v->a[78538] = state(2080);
	v->a[78539] = 1;
	small_parse_table_3927(v);
}

void	small_parse_table_3927(t_small_parse_table_array *v)
{
	v->a[78540] = sym_case_item;
	v->a[78541] = state(2452);
	v->a[78542] = 1;
	v->a[78543] = sym__case_item_last;
	v->a[78544] = state(2224);
	v->a[78545] = 2;
	v->a[78546] = sym_concatenation;
	v->a[78547] = sym__extglob_blob;
	v->a[78548] = actions(1955);
	v->a[78549] = 3;
	v->a[78550] = sym_raw_string;
	v->a[78551] = sym_number;
	v->a[78552] = sym_word;
	v->a[78553] = state(2157);
	v->a[78554] = 5;
	v->a[78555] = sym_arithmetic_expansion;
	v->a[78556] = sym_string;
	v->a[78557] = sym_simple_expansion;
	v->a[78558] = sym_expansion;
	v->a[78559] = sym_command_substitution;
	small_parse_table_3928(v);
}

void	small_parse_table_3928(t_small_parse_table_array *v)
{
	v->a[78560] = 7;
	v->a[78561] = actions(3);
	v->a[78562] = 1;
	v->a[78563] = sym_comment;
	v->a[78564] = actions(2648);
	v->a[78565] = 1;
	v->a[78566] = aux_sym_heredoc_redirect_token1;
	v->a[78567] = actions(2912);
	v->a[78568] = 1;
	v->a[78569] = sym_file_descriptor;
	v->a[78570] = actions(2909);
	v->a[78571] = 2;
	v->a[78572] = anon_sym_LT_AMP_DASH;
	v->a[78573] = anon_sym_GT_AMP_DASH;
	v->a[78574] = state(1459);
	v->a[78575] = 2;
	v->a[78576] = sym_file_redirect;
	v->a[78577] = aux_sym_redirected_statement_repeat2;
	v->a[78578] = actions(2640);
	v->a[78579] = 8;
	small_parse_table_3929(v);
}

void	small_parse_table_3929(t_small_parse_table_array *v)
{
	v->a[78580] = anon_sym_PIPE;
	v->a[78581] = anon_sym_SEMI_SEMI;
	v->a[78582] = anon_sym_AMP_AMP;
	v->a[78583] = anon_sym_PIPE_PIPE;
	v->a[78584] = anon_sym_LT_LT;
	v->a[78585] = anon_sym_LT_LT_DASH;
	v->a[78586] = anon_sym_AMP;
	v->a[78587] = anon_sym_SEMI;
	v->a[78588] = actions(2906);
	v->a[78589] = 8;
	v->a[78590] = anon_sym_LT;
	v->a[78591] = anon_sym_GT;
	v->a[78592] = anon_sym_GT_GT;
	v->a[78593] = anon_sym_AMP_GT;
	v->a[78594] = anon_sym_AMP_GT_GT;
	v->a[78595] = anon_sym_LT_AMP;
	v->a[78596] = anon_sym_GT_AMP;
	v->a[78597] = anon_sym_GT_PIPE;
	v->a[78598] = 7;
	v->a[78599] = actions(3);
	small_parse_table_3930(v);
}

/* EOF small_parse_table_785.c */
