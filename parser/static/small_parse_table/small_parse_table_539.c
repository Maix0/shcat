/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_539.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2695(t_small_parse_table_array *v)
{
	v->a[53900] = actions(1736);
	v->a[53901] = 1;
	v->a[53902] = sym_extglob_pattern;
	v->a[53903] = actions(1870);
	v->a[53904] = 1;
	v->a[53905] = anon_sym_esac;
	v->a[53906] = state(1014);
	v->a[53907] = 1;
	v->a[53908] = aux_sym_case_statement_repeat1;
	v->a[53909] = state(1682);
	v->a[53910] = 1;
	v->a[53911] = sym_case_item;
	v->a[53912] = state(1971);
	v->a[53913] = 1;
	v->a[53914] = sym__case_item_last;
	v->a[53915] = state(1877);
	v->a[53916] = 2;
	v->a[53917] = sym_concatenation;
	v->a[53918] = sym__extglob_blob;
	v->a[53919] = actions(1716);
	small_parse_table_2696(v);
}

void	small_parse_table_2696(t_small_parse_table_array *v)
{
	v->a[53920] = 3;
	v->a[53921] = sym_raw_string;
	v->a[53922] = sym_number;
	v->a[53923] = sym_word;
	v->a[53924] = state(1772);
	v->a[53925] = 5;
	v->a[53926] = sym_arithmetic_expansion;
	v->a[53927] = sym_string;
	v->a[53928] = sym_simple_expansion;
	v->a[53929] = sym_expansion;
	v->a[53930] = sym_command_substitution;
	v->a[53931] = 16;
	v->a[53932] = actions(3);
	v->a[53933] = 1;
	v->a[53934] = sym_comment;
	v->a[53935] = actions(1720);
	v->a[53936] = 1;
	v->a[53937] = anon_sym_LPAREN;
	v->a[53938] = actions(1724);
	v->a[53939] = 1;
	small_parse_table_2697(v);
}

void	small_parse_table_2697(t_small_parse_table_array *v)
{
	v->a[53940] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53941] = actions(1726);
	v->a[53942] = 1;
	v->a[53943] = anon_sym_DOLLAR;
	v->a[53944] = actions(1728);
	v->a[53945] = 1;
	v->a[53946] = anon_sym_DQUOTE;
	v->a[53947] = actions(1730);
	v->a[53948] = 1;
	v->a[53949] = anon_sym_DOLLAR_LBRACE;
	v->a[53950] = actions(1732);
	v->a[53951] = 1;
	v->a[53952] = anon_sym_DOLLAR_LPAREN;
	v->a[53953] = actions(1734);
	v->a[53954] = 1;
	v->a[53955] = anon_sym_BQUOTE;
	v->a[53956] = actions(1736);
	v->a[53957] = 1;
	v->a[53958] = sym_extglob_pattern;
	v->a[53959] = actions(1872);
	small_parse_table_2698(v);
}

void	small_parse_table_2698(t_small_parse_table_array *v)
{
	v->a[53960] = 1;
	v->a[53961] = anon_sym_esac;
	v->a[53962] = state(977);
	v->a[53963] = 1;
	v->a[53964] = aux_sym_case_statement_repeat1;
	v->a[53965] = state(1682);
	v->a[53966] = 1;
	v->a[53967] = sym_case_item;
	v->a[53968] = state(2028);
	v->a[53969] = 1;
	v->a[53970] = sym__case_item_last;
	v->a[53971] = state(1877);
	v->a[53972] = 2;
	v->a[53973] = sym_concatenation;
	v->a[53974] = sym__extglob_blob;
	v->a[53975] = actions(1716);
	v->a[53976] = 3;
	v->a[53977] = sym_raw_string;
	v->a[53978] = sym_number;
	v->a[53979] = sym_word;
	small_parse_table_2699(v);
}

void	small_parse_table_2699(t_small_parse_table_array *v)
{
	v->a[53980] = state(1772);
	v->a[53981] = 5;
	v->a[53982] = sym_arithmetic_expansion;
	v->a[53983] = sym_string;
	v->a[53984] = sym_simple_expansion;
	v->a[53985] = sym_expansion;
	v->a[53986] = sym_command_substitution;
	v->a[53987] = 11;
	v->a[53988] = actions(3);
	v->a[53989] = 1;
	v->a[53990] = sym_comment;
	v->a[53991] = actions(782);
	v->a[53992] = 1;
	v->a[53993] = anon_sym_PIPE;
	v->a[53994] = actions(886);
	v->a[53995] = 1;
	v->a[53996] = anon_sym_SEMI;
	v->a[53997] = actions(1876);
	v->a[53998] = 1;
	v->a[53999] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2700(v);
}

/* EOF small_parse_table_539.c */
